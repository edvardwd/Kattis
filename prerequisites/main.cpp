#include <bits/stdc++.h>
using namespace std;
using usi = unordered_set<int>;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main(){
    int k, m, course, numCourses, minCourses;

    while (cin >> k && k != 0 && cin >> m){
        usi coursesChosen;

        rep(i, 0, k){
            cin >> course;
            coursesChosen.insert(course);
        }

        bool allGood = true;
        rep(i, 0, m){
            cin >> numCourses >> minCourses;
            int coursesInCategory = 0;
            
            rep(j, 0, numCourses){
                cin >> course;
                if (coursesChosen.count(course) > 0) coursesInCategory++;
            }
            if (coursesInCategory < minCourses) allGood = false;
        }
        if (allGood){
            cout << "yes" << endl;
        } else{
            cout << "no" << endl;
        }
    }
    return 0;
}