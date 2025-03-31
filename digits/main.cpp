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
/* #include <bits/stdc++.h>
using namespace std;

string x_next(string x){
    return to_string(x.size());
}

int main(){
    string x0;

    while (getline(cin, x0) && x0 != "END"){
        if (x0.size() == 1){
            cout << 1 << endl;
        } else if (x0.size() < 1e10){
            cout << 3 << endl;
        } else{
            cout << 4 << endl;
        }
    }
    return 0;
} */