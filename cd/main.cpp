#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, m;

    while ((cin >> n >> m) && (n && m)) {
        unordered_set<int> cd_ids;
        cd_ids.reserve(n + m);
        int id, same_count = 0;

        for (int i = 0; i < n + m; ++i) {
           cin >> id;
           bool successful = cd_ids.insert(id).second;
           same_count += (int) (!successful);
        }

        cout << same_count << endl;

    }
    return 0;
}