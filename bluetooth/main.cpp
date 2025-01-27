#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int lowerLeft = 8, upperLeft = 8, lowerRight = 8, upperRight = 8; //default "good" 
    string tooth;
    char condition;
    int* current;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tooth >> condition;

        if (tooth.at(1) == '-') current = &lowerRight;
        else if (tooth.at(1) == '+') current = &upperRight;
        else if (tooth.at(0) == '-') current = &lowerLeft;
        else current = &upperLeft;
        
        if (condition == 'b'){
            *current = 0;
        } else{
            *current -= 1;
        }
    }

    if (upperLeft > 0 && lowerLeft > 0){
        cout << 0 << endl;
    }
    else if (upperRight > 0 && lowerRight > 0){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }

    return 0;
}