#include <bits/stdc++.h>
using namespace std;


int main(){
    int h, w, n, brick, layerWidth = 0, completedLayers = 0;
    cin >> h >> w >> n;

    for (int i = 0; i < n; i++){
        cin >> brick;
        layerWidth += brick;

        if (layerWidth == w){
            layerWidth = 0;
            completedLayers++;
            if (completedLayers == h){
                cout << "YES\n";
                return 0;
            }
        } else if (layerWidth > w){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}