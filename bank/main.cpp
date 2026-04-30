#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <future>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

#ifdef DEBUG
#include "../debug.h"
#else
#define dbg(x)
#define dbgmsg(msg)
#endif

using vpq = vector<priority_queue<int>>;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);

    int N, T, c, t;
    cin >> N >> T;

    vpq minute(T, priority_queue<int>{}); // Vector with pq for each minute

    for (int i = 0; i < N; i++) {
        cin >> c >> t;
        minute[t].push(c);
    }
    dbg(minute);

    int sum = 0;
    for (int t = T - 1; t >= 0; t--) {
        int top = 0;
        if (!minute[t].empty()) {
            top = minute[t].top(); minute[t].pop();
        }
        sum += top;
        while (t && !minute[t].empty()) {
            top = minute[t].top(); minute[t].pop();
            minute[t-1].push(top);
        }
        dbg(minute);
    }
    cout << sum << endl;

    return 0;
}
