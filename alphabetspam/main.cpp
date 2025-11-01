#include <bits/stdc++.h>
using namespace std;

int main(){
    int whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;
    string input;
    cin >> input;
    double len = input.length();

    for (char c : input){
        if (c == '_') whitespace++;
        else if (97 <= (int) c && (int) c <= 122) lowercase++;
        else if (65 <= (int) c && (int) c <= 90) uppercase++;
        else symbols++;
    }
    cout << whitespace / len << endl;
    cout << lowercase / len << endl;
    cout << uppercase / len << endl;
    cout << symbols / len << endl;
    
    return 0;
}