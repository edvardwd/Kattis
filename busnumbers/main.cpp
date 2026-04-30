#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

void print_sequence(const vi& vec, int start, int end) {
    if (end - start > 1) {
        cout << vec[start] << "-" << vec[end] << " ";
        return;
    }
    for (int j = start; j <= end; j++) cout << vec[j] << " ";
}

int main() {
    cin.tie(NULL)->sync_with_stdio(false);

    int n; cin >> n;

    vi buses(n);
    for (int i = 0; i < n; i++) {
        cin >> buses[i];
    }

    sort(buses.begin(), buses.end());
    int lft = 0, rgt = 1;

    while (rgt <= n) {
       if (buses[rgt] != buses[rgt-1] + 1 || rgt == n) {
           print_sequence(buses, lft, rgt - 1);
           lft = rgt;
       }
       rgt++;
    }
    cout << endl;

    return 0;
}
