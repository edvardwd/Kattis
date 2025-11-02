#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vii = array<ll, 2>;


int main(){
    int n, k;
    cin >> n >> k;

    vector<vii> activities;
    multiset<ll> classroom_end_times;
    for (int i = 0; i < k; i++) classroom_end_times.insert(0);

    for (int i = 0; i < n; i++){
        ll s, f;
        cin >> s >> f;

        activities.push_back({s, f});
    }

    sort(activities.begin(), activities.end(), [](vii a, vii b){
        if (a[1] != b[1]) return a[1] < b[1];
        return a[0] < b[0];
    }); // Sort by end times

    int activity_count = 0;

    for (const auto& [start, end] : activities){
        // Find the classroom with closest valid end time to the start time of next activity
        auto it = classroom_end_times.lower_bound(start); // Iterator to the first value that is not less than start

        if (it != classroom_end_times.begin()){
            it--;
        }

        if (*it < start){
            classroom_end_times.erase(it);
            classroom_end_times.insert(end);
            activity_count++;
        }
    }

    cout << activity_count << endl;

    return 0;
}