#include <bits/stdc++.h>

using namespace std;

//main idea:
//loop from L and set N to the first number where digitSum(number) == X
//loop backwards from D and set M to the first number where digitSum(number) == X

int digitSum(int n){
    int sum = 0;
    for (const char& digit : to_string(n)){
        sum += static_cast<int>(digit - '0');
    }
    return sum;
}

int main(){
    int L, D, X, N, M;
    cin >> L >> D >> X;

    int num = L;
    while (num <= D){
        if (digitSum(num) == X){
            N = num;
            break;
        }
        num++;
    }

    num = D;
    while (num >= L){
        if (digitSum(num) == X){
            M = num;
            break;
        }
        num--;
    }

    cout << N << endl << M << endl;

    return 0;
}