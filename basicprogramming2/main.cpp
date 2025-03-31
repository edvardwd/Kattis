#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

string t1(int n){
    int num, diff;
    unordered_set<int> nums;

    for (int i = 0; i < n; i++){
        cin >> num;
        diff = 7777 - num;
        if (nums.count(diff) && num != diff){
            return "Yes";
        }
        nums.insert(num);
    }
    return "No";
}

string t2(int n){
    int num;
    unordered_set<int> nums;

    for (int i = 0; i < n; i++){
        cin >> num;
        if (nums.count(num)){
            return "Contains duplicate";
        }
        nums.insert(num);
    }
    return "Unique";
}

int t3(int n){
    int num;
    unordered_map<int, int> numCounts;
    
    for (int i = 0; i < n; i++){
        cin >> num;
        numCounts[num]++;
        if (numCounts[num] > n / 2) return num;
    }
    return -1;

}

string t4(int n){
    int num;
    vi a;

    for (int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    if (n % 2){ // odd
        return to_string(a[n / 2]);
    }
    return to_string(a[n / 2 - 1]) + " " + to_string(a[n / 2]);
}


string t5(int n){
    int num;
    vi a;
    
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num >= 100 && num < 1000) a.push_back(num);
    }
    sort(a.begin(), a.end());
    string output = to_string(a[0]);
    for (int i = 1; i < a.size(); i++){
        output += " " + to_string(a[i]);
    }

    return output;
}

int main(){
    int n, t;
    cin >> n >> t;


    switch (t)
    {
    case 1:
        cout << t1(n) << endl;
        break;
    case 2:
        cout << t2(n) << endl;
        break;
    case 3:
        cout << t3(n) << endl;
        break;
    case 4:
        cout << t4(n) << endl;
        break;
    case 5:
        cout << t5(n) << endl;
        break;
    default:
        break;
    }

    return 0;
}