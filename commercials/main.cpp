#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, p;
    cin >> n >> p;

    int profit = 0;
    int highest = 0;
    for (int i = 0; i < n; i++){
        int listeners;
        cin >> listeners;

        profit -= p; // cost of one break
        profit += listeners; // i crown / listener

        profit = max(0, profit);
        highest = max(highest, profit);
    }

    cout << highest << endl;


    return 0;
}