#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, G, num;
    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> G;
        map<int, int> nums;
        for (int j = 0; j < G; j++){
            cin >> num;
            if (nums.find(num) != nums.end()){
                nums.erase(num);
            }else{
                nums.insert({num, 1});
            }
        }
        cout << "Case #" << i << ": " << nums.begin()->first << endl;
    } 
    return 0;
}
