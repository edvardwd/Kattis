#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef DEBUG
#include "../debug.h"
#else
#define dbg(x)
#define dbgmsg(msg)
#endif

using vi = vector<int>;
using vvb = vector<vector<bool>>;

vi reconstruct(const vvb& take, const vi& w, int C, int n) {
    vi chosen;
    int c = C;
    int i = n - 1;

    while (i >= 0 && c >= 0) {
        if (take[c][i]){
            chosen.push_back(i);
            c -= w[i];
        }
        i--;
    }
    return chosen;
}

void testCase(int C, int n) {
    vi dp(C + 1, 0);

    // Keep track of items we take
    vvb take(C + 1, vector<bool>(n, false));

    vi v(n), w(n);

    for (int i = 0; i < n; i++){
        cin >> v[i] >> w[i];
    }

    // Solve
    for (int i = 0; i < n; i++) {
        for (int c = C; c > 0; c--) {
            if (c < w[i]) continue;
            if (dp[c - w[i]] + v[i] > dp[c]) {
                dp[c] = dp[c - w[i]] + v[i];
                take[c][i] = true;
            }
            else {
                take[c][i] = false;
            }
        }
    }

    vi reconstructed = reconstruct(take, w, C, n);

    cout << reconstructed.size() << endl;
    for (int item : reconstructed) {
        cout << item << " ";
    }
    cout << "\n";

}


int main() {
    cin.tie(NULL)->sync_with_stdio(false);

    int C, n;

    while (cin >> C >> n) {
       testCase(C, n);
    }

    return 0;
}
