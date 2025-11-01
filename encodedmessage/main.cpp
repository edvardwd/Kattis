#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)

int main(){
    int cases;
    string encoded, decoded;
    cin >> cases;

    rep(i, 0, cases){
        cin >> encoded;
        decoded = "";
        int n = encoded.length();
        int offset = sqrt(n) - 1;

        rep(j, 0, n){
            decoded += encoded.at((j + offset * (j + 1)) % (n + 1));
        }
        cout << decoded << endl;
    }


    return 0;
}