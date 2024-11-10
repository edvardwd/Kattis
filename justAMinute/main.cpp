#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, S, totalMinsDisplayed = 0, totalSecs = 0;
    cin >> N;

    rep(i, 0, N){
        cin >> M >> S;
        totalMinsDisplayed += M;
        totalSecs += S;
    }
    double ans = totalSecs / (totalMinsDisplayed * 60.0);

    if (ans > 1){
        cout << fixed << setprecision(9) << ans << endl;
    } else{
        cout << "measurement error" << endl;
    }

    return 0;
}