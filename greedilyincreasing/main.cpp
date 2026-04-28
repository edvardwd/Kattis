#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);

    vi g;
    int n, a;
    cin >> n >> a;

    g.push_back(a);

    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a > g.back()) g.push_back(a);
    }

    cout << g.size() << endl;
    for (int g_i : g) cout << g_i << " ";
    cout << endl;

    return 0;
}
