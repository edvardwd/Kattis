#include <bits/stdc++.h>
using namespace std;


vector<string> createEmptyBoard(){
    vector<string> board;
    string row;
    string oddRow = "|:::|...|:::|...|:::|...|:::|...|";
    string evenRow = "|...|:::|...|:::|...|:::|...|:::|";

    for (int i = 1; i <= 8; i++){
        row = (i % 2) ? oddRow : evenRow;
        board.push_back(row);
    }
    return board;
}


int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    string line, pos;
    string outLine = "+---+---+---+---+---+---+---+---+";
    vector<string> whitePieces;
    vector<string> blackPieces;
    vector<string> board = createEmptyBoard();

    //Read input
    while (getline(cin, line)){
        stringstream ss{line};
        getline(ss, line, ' ');
        bool white = (line.substr(0, 5) == "White");

        while (getline(ss, pos, ',')){
            if (white){
                whitePieces.push_back(pos);
            } else{
                blackPieces.push_back(pos);
            }
        }
    }

    int row, col;
    char pieceChar;

    for (const auto& piece : whitePieces){
        row = piece[piece.length() - 1] - '0' - 1;
        col = 2 + ((piece[piece.length() - 2] - 'a') * 4);
        pieceChar = (piece.length() == 3) ? piece[0] : 'P'; //pawn
        board[row][col] = pieceChar;
    }

    for (const auto& piece : blackPieces){
        row = piece[piece.length() - 1] - '0' - 1;
        col = 2 + ((piece[piece.length() - 2] - 'a') * 4);
        pieceChar = (piece.length() == 3) ? tolower(piece[0]) : 'p'; //pawn     
        board[row][col] = pieceChar;
    }

    
    //Print board
    cout << outLine << endl;
    for (int i = board.size() - 1; i >= 0; i--){ //board is saved 'upside down'
        cout << board.at(i) << endl;
        cout << outLine << endl;
    }


    return 0;
}