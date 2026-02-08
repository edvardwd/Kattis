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


int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    cout.tie(NULL)->sync_with_stdio(false);

    int n, q, a, b;
    char op;

    cin >> n >> q;
    UF uf{n};

    for (int i = 0; i < q; ++i) {
        cin >> op >> a >> b;

        if (op == '=') {
            uf.join(a, b);
        } 
        else if (uf.sameSet(a, b)) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
    return 0;
}