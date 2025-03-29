#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, diff;
    cin >> n >> m;
    diff = m - n;
    string piece = (abs(diff) == 1) ? " piece " : " pieces "; //plural?

    if (diff > 0){
        cout << "Dr. Chaz will have " << diff << piece << "of chicken left over!\n";
    } else{
        cout << "Dr. Chaz needs " << abs(diff) << " more" << piece << "of chicken!\n";
    }
    return 0;
}
