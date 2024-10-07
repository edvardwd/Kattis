#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vals;
    int num;

    int output = 0;

    //Fill vector
    while (vals.size() != n){
        cin >> num;
        vals.emplace_back(num);
    }

    
    //Two-pointer technique
    int lft = 0, rgt = 0;
    while (lft <= n - m){
        int even = 0;

        while (rgt - lft < m){
            if (!(vals.at(rgt) % 2)){ //even
                even++;
            }
            if (even == 2){
                output++;
                break;
            }
            rgt++;
        }
        lft++;
        rgt = lft;
    }
    cout << output;


    return 0;
}