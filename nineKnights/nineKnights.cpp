#include <bits/stdc++.h>
using namespace std;

bool isKnight(char piece){
    if (piece == 'k') return true;
    return false;
}


bool isValid(int row, int col){
    if ( row >= 0 && row < 5 && col >= 0 && col < 5) return true;
    return false;
}

vector<pair<int, int>> attacks(int row, int col){
    vector<pair<int, int>> possibilities{{row - 2, col - 1}, {row - 2, col + 1},
                                        {row - 1, col - 2}, {row - 1, col + 2},
                                        {row + 1, col + 2}, {row + 1, col -2},
                                        {row + 2, col -1}, {row + 2, col +1}};
    vector<pair<int, int>> legal; 
    for (auto& pos : possibilities){
        if (isValid(pos.first, pos.second)) legal.emplace_back(pos);
    }
    return legal;
}

bool isAttacked(vector<vector<char>> board, int row, int col){
    vector<pair<int, int>> legalMoves = attacks(row, col);
    for (auto& pos : legalMoves){
        if (isKnight(board.at(pos.first).at(pos.second))){
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<char>> board;
    string line;
    int knights = 0;

    //fill board
    for (int i = 0; i < 5; ++i){
        vector<char> row;
        cin >> line;

        for (int j = 0; j < 5; ++j){
            row.emplace_back(line.at(j));
            if (isKnight(line.at(j))) knights++;
        }
        board.emplace_back(row);
    }
    if (knights != 9){
        cout << "invalid" << endl;
        return 0;
    }

    //Loop through board
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            if (isKnight(board.at(i).at(j)) && isAttacked(board, i, j)){
                cout << "invalid" << endl;
                return 0;
            }
        }
        
    }
    cout << "valid" << endl;
    return 0;

}