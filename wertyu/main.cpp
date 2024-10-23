#include <bits/stdc++.h>
using namespace std;


int main(){
    string line, output;
    string keyboard{"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"}; //WERTYU setup
    
    while (getline(cin, line)){
        for (char& ch : line){
            char correctChar = isspace(ch) ? ' ' : keyboard[keyboard.find(ch) - 1]; //shift 1 left (keep spaces)
            output += correctChar;
        }
        output += '\n'; //trigger newline
    }
    cout << output;

    return 0;
}