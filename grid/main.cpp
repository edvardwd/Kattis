#include <bits/stdc++.h>

using namespace std;


struct coord{
    int row;
    int col;
};

bool is_within(coord coordinate, int n_rows, int n_cols){
    if (0 <= coordinate.row && coordinate.row < n_rows &&
        0 <= coordinate.col && coordinate.col < n_cols) return true;
    return false; 
}

int main(){
    int n, m;
    cin >> n >> m;

    int grid[n][m];
    vector<coord> adj[n][m];
    
    for (int i = 0; i < n; i++){
        string line;
        cin >> line;
        for (int j = 0; j < m; j++){
            int val = (int) line[j] - '0';
            grid[i][j] = 0;

            // Get adjacent neighbors:
            if (is_within({i - val, j}, n, m)) adj[i][j].push_back({i - val, j});
            if (is_within({i + val, j}, n, m)) adj[i][j].push_back({i + val, j});
            if (is_within({i, j - val}, n, m)) adj[i][j].push_back({i, j - val});
            if (is_within({i, j + val}, n, m)) adj[i][j].push_back({i, j + val});
        }
    }

    bool visited[n*m];
    for (int i = 0; i < n*m; i++) visited[i] = false;

    int moves[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            moves[i][j] = 0;
        }

    }

    queue<coord> q;

    // BFS from start:
    visited[0] = true;
    moves[0][0] = 0;
    q.push({0, 0});

    while (!q.empty()){
        coord s = q.front(); q.pop();
        if (s.row == n - 1 && s.col == m - 1) break;

        // Process node s
        for (const auto& u : adj[s.row][s.col]){
            if (visited[u.row*m + u.col]) continue;
            visited[u.row*m + u.col] = true;
            moves[u.row][u.col] = moves[s.row][s.col] + 1;
            
            q.push(u);
        }
    }
    if (visited[n*m - 1]){
        cout << moves[n - 1][m - 1] << endl;
    } else{
        cout << -1 << endl;
    }
    return 0;
}