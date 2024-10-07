#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ULL;

int main(){
    ULL N, P, centerEdge;
    cin >> N >> P; 

    //find center edges
    if (N % 2){ //odd
        centerEdge = (P / 2) + (N / 2 + 1);
    } else{
        centerEdge = (P / 2) + (N / 2);
    }

    ULL whitespace =  ((N- centerEdge) % P) * 2;

    if (whitespace == P){
        whitespace = 0;
    }

    cout << whitespace << endl;
    return 0;
}