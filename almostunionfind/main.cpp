#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

struct UF {
    vi rep; // Representative for a disjoint set
    vector<unordered_set<int>> sets;

    UF(int n) : rep(n + 1), sets(n + 1) {
        for (int i = 1; i <= n; i++) {
            rep[i] = i;
            sets[i].insert(i);
        }
    }

    int find(int x) {
        return rep[x];
    }

    void join(int x, int y) {
        int x_rep = find(x), y_rep = find(y);
        if (x_rep == y_rep) return; // Already same set

        if (sets[x_rep].size() > sets[y_rep].size()) swap(x_rep, y_rep); // x_rep is now smallest

        // Update parents
        for (int child : sets[x_rep]) {
            rep[child] = y_rep;
        }

        sets[y_rep].insert(sets[x_rep].begin(), sets[x_rep].end()); // Insert children
        sets[x_rep].clear(); // Clear old set
    }

    void move(int x, int y) {
       // Move x into same set as y
       int y_rep = find(y), x_rep = find(x);
       if (x_rep == y_rep) return;

       sets[x_rep].erase(x);
       sets[y_rep].insert(x);

       rep[x] = y_rep;
    }

    ll sum(int x) {
        ll tot = 0;
        for (int num : sets[find(x)]) {
            tot += num;
        }
        return tot;
    }

    int size(int x) {
        return sets[find(x)].size();
    }

};



int main() {
    cin.tie(NULL)->sync_with_stdio(false);

    int n, m, op, p, q;

    while (cin >> n >> m) {
        UF uf(n);

        for (int i = 0; i < m; i++) {
            cin >> op;
            switch (op) {
                case 1:
                    cin >> p >> q;
                    uf.join(p, q);
                    break;

                case 2:
                    cin >> p >> q;
                    uf.move(p, q);
                    break;

                case 3:
                    cin >> p;
                    cout << uf.size(p) << " " << uf.sum(p) << endl;
                    break;

                default:
                    break;
            }

        }
    }
    return 0;
}
