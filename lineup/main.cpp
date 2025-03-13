#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string lastName, name;
    cin >> lastName; 
    string order, newOrder;

    for (int i = 0; i < n - 1; i++){
        cin >> name;
        if (order == "NEITHER") continue;
        if (name > lastName) newOrder = "INCREASING";
        else if (name < lastName) newOrder = "DECREASING";
        if (order != newOrder && i != 0){
            order = "NEITHER";
            continue;
        }
        order = newOrder;
        lastName = name; 
    }
    cout << order << endl;
    return 0;
}