#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    int passengers = 0, maxPassengers = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        passengers += (b - a);
        maxPassengers = max(maxPassengers, passengers);
    }
    cout << maxPassengers << endl;
    return 0;
}