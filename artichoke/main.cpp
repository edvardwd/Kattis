#include <bits/stdc++.h>
using namespace std;

long double price(int p, int a, int b, int c, int d, int k){
    return p * (sin(a*k + b) + cos(c*k + d) + 2);
}


int main(){
    int p, a, b, c, d, n;
    long double highest, maxDecline, newPrice;

    cin >> p >> a >> b >> c >> d >> n;

    highest = price(p, a, b, c, d, 1);
    maxDecline = 0;

    for (int i = 2; i <= n; i++){
        newPrice = price(p, a, b, c, d, i);
        highest = max(highest, newPrice);
        maxDecline = max(maxDecline, highest - newPrice);
    }
    cout << fixed << setprecision(9) << maxDecline << endl;
    return 0;
}