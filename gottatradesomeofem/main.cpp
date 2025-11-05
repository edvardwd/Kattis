#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

struct UF {
	vi e;
	UF(int n) : e(n, -1) {}
	bool sameSet(int a, int b) { return find(a) == find(b); }
	int size(int x) { return -e[find(x)]; }
	int find(int x) { return e[x] < 0 ? x : e[x] = find(e[x]); }
	bool join(int a, int b) {
		a = find(a), b = find(b);
		if (a == b) return false;
		if (e[a] > e[b]) swap(a, b);
		e[a] += e[b]; e[b] = a;
		return true;
	}
};

int ans[1000001];


int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, m, k;
	cin >> n >> m >> k;

	UF uf(n);
	int num_groups = n;
	for (int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;

		a--, b--; // UnionFind is 0-indexed
		bool joined = uf.join(a, b); // Put the friends in the same group
		
		if (joined){
			num_groups--;
		}
	}
	
	unordered_map<int, vi> friend_groups;
	int smallest_group = 100000;
	for (int i = 0; i < n; i++){
		smallest_group = min(smallest_group, uf.size(i));

		if (smallest_group < k){
			cout << "impossible\n"; // Too few in smallest group
			return 0; 
		}

		int leader = uf.find(i);

		if (friend_groups.count(leader)){
			friend_groups[leader].push_back(i);
		} else{
			friend_groups[leader] = {i};
		}

	}
	// We now have a map with all friend groups
	for (const auto& [leader, friends] : friend_groups){
		for (int i = 0; i < friends.size(); i++){
			ans[friends.at(i)] = min(i + 1, k); // Ensure only valid games
		}
	}

	for (int i = 0; i < n; i++){
		cout << ans[i] << " ";
	}
	cout << "\n";




	return 0;
}