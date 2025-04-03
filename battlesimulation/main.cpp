#include <bits/stdc++.h>
using namespace std;

unordered_map<char, char> attackToDefense{{'R', 'S'}, {'B', 'K'}, {'L', 'H'}};

int main(){
    deque<char> attack;
    string defense;
    char c;
    while (cin >> c){
        attack.push_back(c);
    }

    while (!attack.empty()){
        if (attack.size() >= 3 && unordered_set<char>{attack.begin(), attack.begin() + 3}.size() == 3){
            for (int i = 0; i < 3; i++) attack.pop_front();
            defense += 'C';
        } else{
            defense += attackToDefense[attack.front()];
            attack.pop_front();
        }
    }
    cout << defense << endl;
    return 0;
}