#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count;
    string firstName, lastName, name, course;
    map<string, unordered_set<string>> courseMap;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> firstName >> lastName >> course;
        name = firstName + lastName;
        courseMap[course].insert(name);
    }
    for (const auto& c : courseMap){
        course = c.first;
        count = c.second.size();
        cout << course << " " << count << endl;
    }

    return 0;
}