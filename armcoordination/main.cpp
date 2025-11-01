#include <bits/stdc++.h>
using namespace std;

int main(){
    long x, y, r;
    cin >> x >> y >> r;

    cout << x - r << " " << y + r << endl;
    cout << x + r << " " << y + r << endl;
    cout << x + r << " " << y - r << endl;
    cout << x - r << " " << y - r << endl;
    return 0;
}