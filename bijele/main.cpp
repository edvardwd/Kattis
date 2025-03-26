#include <bits/stdc++.h>

using namespace std;

enum Piece{king, queen, rook, bishop, knight, pawn};
map<int, int> pieceCount{{king, 1}, {queen, 1}, {rook, 2}, {bishop, 2}, {knight, 2}, {pawn, 8}};

int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    
    int count;

    for (int i = 0; i < 6; i ++){
        cin >> count;
        cout << pieceCount[i] - count << " ";
    }
    cout << "\n";
    return 0;
}