#include <bits/stdc++.h>

using namespace std;

void discard(int type, int difficulty, multiset<int>& difficulties){
    if (type == 1){
        // Discard strictly harder than difficulty
        auto it = difficulties.upper_bound(difficulty);
        if (it == difficulties.end()){
            cout << -1 << endl;
        } else{
            cout << *it << endl;
            difficulties.erase(it);
        }
        return;
    }
    // Discard not harder than difficulty
    auto it = difficulties.lower_bound(difficulty);
    if (*it != difficulty && it != difficulties.begin()){
        it--;
    }
    if (*it <= difficulty){
        cout << *it << endl;
        difficulties.erase(it);
    } else {
        cout << -1 << endl;
    }
}

int main(){
    int n, q, d, t;
    multiset<int> problem_difficulties;

    cin.tie(NULL)->sync_with_stdio(false);
    cin >> n >> q;

    for (int i = 0; i < n; i++){
        cin >> d;
        problem_difficulties.emplace(d);
    }

    for (int i = 0; i < q; i++){
        cin >> t >> d;
        discard(t, d, problem_difficulties);
    }

    return 0;
}