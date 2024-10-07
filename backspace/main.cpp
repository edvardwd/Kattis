#include<bits/stdc++.h>

using namespace std;

int main(){
    string input, output;
    cin >> input;

    for (const char& character : input){
        if (character == '<'){
            output.pop_back();
            continue;
        }
        output.push_back(character);
    }
    cout << output << endl;
}