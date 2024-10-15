#include <bits/stdc++.h>
using namespace std;

int main(){
    string name, output;
    cin >> name;

    for (const char& c : name){
        if (output.back() != c) output += c;
    }
    cout << output << endl;
    return 0;
}