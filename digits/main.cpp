#include <bits/stdc++.h>
using namespace std;

string x_next(string x){
    return to_string(x.size());
}

int main(){
    string x0, xLast, x;
    int i;

    while (getline(cin, x0) && x0 != "END"){
        xLast = x0;
        x = x_next(x0);
        i = 1;
        while (xLast != x){
            i++;
            xLast = x;
            x = x_next(xLast);  

        }
        cout << i << endl;
    }
    return 0;
}