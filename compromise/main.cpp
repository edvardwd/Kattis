#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n, m;
    cin >> t;

    for (int k = 0; k < t; k++){
        cin >> n >> m;
        string answers, a;
        map<int, int> answerCount;

        for (int i = 0; i < n; i++){
            cin >> answers;
        
        for (int j = 0; j < m; j++){
            answerCount[j] = answerCount[j] + (answers.at(j) == '1');
        }
    }
        for (int i = 0; i < m; i++){
            a += (answerCount.at(i) > (n/2)) ? '1' : '0';
        }
        cout << a << endl;
    }    
    return 0;
}