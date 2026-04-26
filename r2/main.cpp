#include <bits/stdc++.h>

using namespace std;

int main() {
    int r1, r2, s;
    cin >> r1 >> s;

    // s = (r1 + r2) / 2 ==> r2 = 2s - r1
    cout << 2*s - r1 << endl;

    return 0;
}
