#include <bits/stdc++.h>
using namespace std;


int smallestFactor(int n){
    int iSqrt = floor(sqrt(n));
    for (int i = 2; i <= iSqrt; i++){
        if (n % i == 0) return i;
    }
    return n;
}



int main(){
    int X;
    cin >> X;
    
    int factors = 0;
    while (X > 1){
        factors++;
        X /= smallestFactor(X);
    }
    cout << factors << endl;

    return 0;
}