#include <bits/stdc++.h>
using namespace std;


bool optimalLaunchWindow(int year){
    if (year == 2018) return true;
    //april 2018 (and every 26 months after) is optimal
    int monthsSinceApril2018 = 12 * (year - 2018) - 3; //in january that year
    if (monthsSinceApril2018 % 26 + 11 >= 26) return true;
    return false;
}

int main(){
    int y;
    cin >> y;
    if (optimalLaunchWindow(y)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}