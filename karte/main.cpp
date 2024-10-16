#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin >> input;

    map<char, set<string>> deck{{'P', {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"}},
                                {'K', {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"}},
                                {'H', {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"}},
                                {'T', {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"}}};

    //Loop through input and remove found cards from the deck
    int i = 0;
    while (i < input.length() -2){
        if (deck.at(input.at(i)).find(input.substr(i + 1, 2)) == deck.at(input.at(i)).end()){ //card already removed = Two exact same cards
            cout << "GRESKA" << endl;
            return 0;
        } else{
            deck.at(input.at(i)).erase(input.substr(i + 1, 2));
        }
        i += 3;
    }

    cout << deck.at('P').size() << " " << deck.at('K').size() << " " << deck.at('H').size() << " " << deck.at('T').size() << endl; 

    return 0;
}