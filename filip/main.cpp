#include <bits/stdc++.h>
using namespace std;

int reverseInteger(int n){
    string nString = to_string(n);
    string revString;
    for (int i = nString.length() - 1; i >= 0; i--){
        revString += nString.at(i);
    }
    return stoi(revString);
}

int main(){
    int a, b;
    cin >> a >> b;
    int ans = max(reverseInteger(a), reverseInteger(b));
    cout << ans << endl;
    return 0;
}