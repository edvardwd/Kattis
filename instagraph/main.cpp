#include <bits/stdc++.h>
using namespace std;

using vii = array<int, 2>;

struct Node{
    unordered_set<int> points_to;
    unordered_set<int> pointed_to_by;
};

unordered_map<int, Node> ans;

int cc(int v){
    int res = 0;
    for (int follower : ans[v].pointed_to_by){
        if (!(ans[v].points_to.count(follower))){
            res++;
        }
    }       
    return res;
}

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        ans[u].points_to.emplace(v);
        ans[v].pointed_to_by.emplace(u);
    }

    vii highest{1, 0};
    for (int i = 1; i <= n; i++){
        int cc_score = cc(i);
        if (cc_score > highest[1]){
            highest = vii{i, cc_score};
        }
    }

    cout << highest[0] << " " << highest[1] << endl;

    return 0;
}