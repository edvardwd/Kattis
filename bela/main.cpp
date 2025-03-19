#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> dominantScores{{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, 
{'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}};

unordered_map<char, int> nonDominantScores{{'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, 
{'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}};


int main(){
    int n, score = 0;
    char dominantSuit;
    string card;
    cin >> n >> dominantSuit;

    for (int i = 0; i < 4 * n; i++){
        cin >> card;
        bool dominant = (card[1] == dominantSuit);
        if (dominant){
            score += dominantScores[card[0]];
        } else{
            score += nonDominantScores[card[0]];
        }
    }
    cout << score << endl;
}