#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, g, id;
    cin >> n;

    vector<vector<int>> groups;


    for (int i = 0; i < n; i++){
        vector<int> currentGroup;
        cin >> g;
        for (int j = 0; j < g; j++){
            cin >> id;
            currentGroup.push_back(id);
        }
        groups.push_back(currentGroup);
    }

    for (const auto& group : groups){
        for (int i = 1; i < group.size(); i++){
            if (group[i] != group[i-1] + 1){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}