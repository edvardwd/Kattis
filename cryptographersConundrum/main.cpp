#include <bits/stdc++.h>

using namespace std;

int diffChars(string name){
    int diff = 0;
    if (name.at(0) != 'P') diff++;
    if (name.at(1) != 'E') diff++;
    if (name.at(2) != 'R') diff++;
    
    return diff;
}

int main(){
    string text;
    cin >> text;

    int i = 0, daysNeeded = 0;
    
    while (i < text.length() - 2){
        daysNeeded += diffChars(text.substr(i, 3));
        i += 3;
    }

    cout << daysNeeded << endl;
    return 0;
}