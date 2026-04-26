#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r, e, c;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> r >> e >> c;

        string ans = (e - c > r) ? "advertise" : ((e - c == r) ? "does not matter" : "do not advertise");
        cout << ans << endl;
    }

    return 0;
}
