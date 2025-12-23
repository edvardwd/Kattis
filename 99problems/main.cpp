#include <bits/stdc++.h>

using namespace std;

int NUMBERS[100];

void pre(){
    int num = 99;
    int i = 0;
    while (i < 100){
        NUMBERS[i] = num;
        num += 100;
        i++;
    }
}

int main(){
    pre();
    int n;
    cin >> n;
    
    auto [p_lower, p_upper] = equal_range(NUMBERS, NUMBERS + 100, n);
    int lower = (*p_lower == 99) ? 99 : *(p_lower - 1);
    int upper = *p_upper;

    if (p_upper >= NUMBERS + 100){ // Not found
        cout << NUMBERS[99] << endl;
    } else if (upper == 99){
        cout << 99 << endl;
    } else if (upper - n <= n - lower){
        cout << upper << endl;
    } else{
        cout << lower << endl;
    }
    return 0;
}