#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, speed, time;
    cin >> n;

    while(n != -1){
        int prevTime = 0, dist = 0;

        for (int i = 0; i < n; i++){
            cin >> speed >> time;
            dist += speed * (time - prevTime);
            prevTime = time;
        }
        cout << dist << " miles" << endl;
        cin >> n;
    }

    return 0;
}