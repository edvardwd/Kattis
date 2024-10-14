#include <bits/stdc++.h>

using namespace std;

int main(){
    int score1, score;
    int leader = 0, highest = 0; 
    for (int i = 1; i <= 5; i++){
        int sum = 0;
        for (int j = 0; j < 4; ++j){
            cin >> score;
            sum += score;
        }
        if (sum > highest){
            highest = sum;
            leader = i;
        }
    }
    cout << leader << " " << highest << endl;
    return 0;
}