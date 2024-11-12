#include <bits/stdc++.h>
using namespace std;

int main(){
    string code;
    int nopsNeeded = 0, lastInst = 0;
    cin >> code;

    for (int i = 1; i < code.size(); i++){
        if (isupper(code.at(i))){
            if ((i - lastInst) % 4 != 0) nopsNeeded += 4 - ((i - lastInst) % 4); 
            lastInst = i;
        }
    }
    cout << nopsNeeded << endl;

    return 0;
}