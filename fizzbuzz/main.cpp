#include <bits/stdc++.h>

using namespace std;


int main(){
    int X, Y, N;
    bool divisible;
    cin >> X >> Y >> N;

    for (int i = 1; i <= N; i++){
        divisible = false;
        if (i % X == 0){
            cout << "Fizz";
            divisible = true;
        }
        if (i % Y == 0){
            cout << "Buzz";
            divisible = true;
        }
        if (!divisible) cout << i;
        
        cout << endl;
    }
    return 0;
}