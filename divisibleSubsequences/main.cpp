#include <bits/stdc++.h>
using namespace std;

using ULL = unsigned long long;


ULL nChoose2(ULL n){
    return (n * (n-1)) / 2;
}

int main(){
    int c, n;
    int d, num;
    cin >> c;

    for (int i = 0; i < c; i++){
        cin >> d >> n;

        map<int, int> sumModD{{0, 1}};
        int sum = 0;
        for (int j = 0; j < n; j++){
            cin >> num;
            sum += (num % d);
            sum = sum % d;
            sumModD[sum] = sumModD[sum] + 1;
        }
        ULL combs = 0;
        for (const auto& mods : sumModD){
            combs += nChoose2(mods.second);
        }
       cout << combs << endl;
    }

    return 0;
}