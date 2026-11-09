#include <bits/stdc++.h>
using namespace std;


int times_seen[7];
int index_seen[7];


void solve() {
  int n, a;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    times_seen[a] += 1;
    index_seen[a] = i + 1;
  }

  for (int i = 6; i > 0; i--) {
    if (times_seen[i] == 1) {
      cout << index_seen[i] << endl;
      return;
    }
  }
  cout << "none\n";
}


int main() {
  memset(times_seen, 0, sizeof times_seen);
  solve();

  return 0;
}
