#include <bits/stdc++.h>

using namespace std;

int main(){
    int P, K, N;
    cin >> P;

    int sum, oddSum, evenSum;

    for (int i = 0; i < P; i++){
        cin >> K >> N;
        sum = (N * N + N) / 2;
        oddSum = N*N;
        evenSum = N*N + N;
        cout << K << " " << sum << " " << oddSum << " " << evenSum << endl;
    }

    return 0;
}