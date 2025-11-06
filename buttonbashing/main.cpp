#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void test_case(){
    int n, t;
    cin >> n >> t;

    vi buttons;
    buttons.reserve(n);

    for (int i = 0; i < n; i++){
        int b;
        cin >> b;
        buttons.push_back(b);
    }

    // BFS
    vi steps(3601, -1);
    vector<bool> visited(3601, false);

    int lowest_over = 3600;

    queue<int> q;

    steps.at(0) = 0;
    visited.at(0) = true;
    q.push(0);

    while (!q.empty()){
        int front = q.front(); q.pop();

        if (front == t){
            cout << steps.at(front) << " 0\n";
            return;
        }
        if (front > t){
            lowest_over = min(lowest_over, front);
        }

        for (const auto& btn : buttons){
            int dest = front + btn; // Next time vertex
            dest = (min(max(0, dest), 3600));

            if (visited.at(dest)) continue;
            steps.at(dest) = steps.at(front) + 1;
            visited.at(dest) = true;

            q.push(dest);
        }
    }
    cout << steps.at(lowest_over) << " " << lowest_over - t << endl;
}


int main(){
    int n_test_cases;
    cin >> n_test_cases;

    for (int i = 0; i < n_test_cases; i++){
        test_case();
    }


    return 0;
}