#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)

int main(){
    int N, K, O, ans;
    cin >> N;

    rep(i, 0, N){
        cin >> K;
        ans = 1 - K;
        rep(i, 0, K){
            cin >> O;
            ans += O;
        }
        cout << ans << endl;
    }

    return 0;
}