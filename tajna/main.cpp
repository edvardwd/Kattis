#include <bits/stdc++.h>

using namespace std;

int findRows(int n){
    int row = floor(sqrt(n));
    while (row > 0){
        if (n % row == 0) return row;
        row--;
    }
    return 1;
}

int main(){
    string receivedMsg;
    cin >> receivedMsg;
    int n = receivedMsg.length();
    int rows = findRows(n);

    string msg;
    int i = 0;
    while (i < n -1){
        msg += receivedMsg.at(i);
        i += rows;

        if (i == n - 1){
            msg += receivedMsg.at(i);
            break;
        }
        else if (i > (n - 1)){
            i = i % (n - 1);
        }
    }

    cout << msg << endl;

    return 0;
}