#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, b;
    double p;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> b >> p;
        cout << fixed << setprecision(4) << 60 * (b - 1) / p << " "
        << 60 * b / p << " " << 60 * (b + 1) / p << endl;
    }
    return 0;
}