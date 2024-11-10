#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = 0; i < b; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, value, salary;
    string word;
    unordered_map<string, int> hayPointDict;
    cin >> m >> n;

    rep(i, 0, m){
        cin >> word >> value;
        hayPointDict[word] = value;
    }

    rep(i, 0, n){ //testcases
        salary = 0;
        while (cin >> word && word != "."){
            salary += hayPointDict[word];
        }
        cout << salary << endl;
    }

    return 0;
}