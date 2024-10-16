#include <bits/stdc++.h>
using namespace std;

int main(){
    string cards;
    cin >> cards;

    int score = 0;
    map<char, int> cardCount{{'T', 0}, {'C', 0}, {'G', 0}};

    for (const char& card : cards){
        cardCount.at(card)++;
    }
    
    for (const pair<char, int> type : cardCount){
        score += type.second * type.second; //add num_of_cards^2
    }

    int sets = min(min(cardCount.at('T'), cardCount.at('C')), cardCount.at('G'));
    score += sets * 7; //add 7 for every set of 3 different scientific cards

    cout << score << endl;

    return 0;
}