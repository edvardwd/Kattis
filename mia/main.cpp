#include <bits/stdc++.h>
using namespace std;

int calculateScore(int a, int b){
    if (min(a, b) == 1 && max(a, b) == 2) return 1e3;
    if (a == b) return stoi(to_string(a) + to_string(b)) * 1e1;
    if (a < b) swap(a, b);
    return stoi(to_string(a) + to_string(b));
}

int main(){
    int s0, s1, r0, r1, p1, p2;
    string line;

    while (getline(cin, line) && line != "0 0 0 0"){
        stringstream ss{line};
        ss >> s0 >> s1 >> r0 >> r1;
        p1 = calculateScore(s0, s1);
        p2 = calculateScore(r0, r1);
        if (p1 > p2) cout << "Player 1 wins.\n";
        else if (p1 < p2) cout << "Player 2 wins.\n";
        else cout << "Tie.\n";
    }

    return 0;
}