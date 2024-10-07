#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int n;
    cin >> n;
    string word;
    string abbrv;
    for (int i = 0; i < n; i++){
        cin >> word;
        if (isupper(word.at(0))){
            abbrv += word.at(0);
        }
    }
    cout << abbrv;
}