#include <bits/stdc++.h>

using namespace std;


enum class Color{white, black};
vector<char> ORDER{'K', 'Q', 'R', 'B', 'N', 'P'};

void sortPieces(vector<string>& vec, Color color){
    if (color == Color::black){
        sort(vec.begin(), vec.end(), [](const string& a, const string& b){
            if (a[a.length() - 1] > b[b.length() - 1] ) return true;
            if ((a[a.length() - 1] == b[b.length() - 1]) && (a[a.length() - 2] < b[b.length() - 2])) return true;
            return false;
        });
    } else{
        sort(vec.begin(), vec.end(), [](const string& a, const string& b){
            if (a[a.length() - 1] < b[b.length() - 1] ) return true;
            if ((a[a.length() - 1] == b[b.length() - 1]) && (a[a.length() - 2] < b[b.length() - 2])) return true;
            return false;   
        });
    }
}

void printVec(vector<string> vec){
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i];
        if (i + 1 != vec.size()) cout << ",";
    }
    cout << endl;
}


vector<string> joinPieces(map<char, vector<string>> input, Color color){
    vector<string> output;
    for (auto piece : ORDER){
        if (input.find(piece) == input.end()) continue;
        if (input[piece].size() > 1){
            sortPieces(input[piece], color);
        }
        for (auto pos : input[piece]){
            output.push_back(pos);
        }
    }
    return output;
}

int main(){
    string row;
    int rowNum = 8;
    map<char, vector<string>> whitePieces;
    map<char, vector<string>> blackPieces;    


    while (getline(cin, row)){
        if (row[0] == '+') continue;

        for (int i = 2; i < row.size(); i += 4){ //loop through pieces
            char col = 'a' + ((i - 2) / 4);
            if (row[i] != ':' && row[i] != '.'){ //containing piece
                string notation;
                if (toupper(row[i]) != 'P') notation += toupper(row[i]);
                notation += col;
                notation += to_string(rowNum);

                if (isupper(row[i])){
                    if (whitePieces.find(row[i]) == whitePieces.end()){
                        whitePieces[row[i]] = vector<string>{notation};
                    } else{
                        whitePieces[row[i]].push_back(notation);
                    }
                } else{
                    char key = toupper(row[i]);
                    if (blackPieces.find(key) == blackPieces.end()){
                        blackPieces[key] = vector<string>{notation};
                    } else{
                        blackPieces[key].push_back(notation);
                    }
                }
            }
        }
        rowNum--;
    }

    vector<string> whiteOutput = joinPieces(whitePieces, Color::white);
    vector<string> blackOutput = joinPieces(blackPieces, Color::black);
    cout << "White: ";
    printVec(whiteOutput);
    cout << "Black: ";
    printVec(blackOutput);
    return 0;
}
