#include <bits/stdc++.h>
using namespace std;

using vs = vector<string>;

void insertion_sort(vs& vec) {
   // Insertion sort where only the
   // first two letters are compared
   for (int i = 1; i < vec.size(); i++) {
       string name = vec[i];
       // Insert name into the sorted subarray
       int j = i - 1;
       while (j >= 0 && vec[j].substr(0, 2) > name.substr(0, 2)) {
           vec[j + 1] = vec[j];
           j--;
       }
       vec[j + 1] = name;
   }
}

void testCase(int n) {
    vs names(n);
    for (int i = 0; i < n; i++) cin >> names[i];

    insertion_sort(names);
    for (const string& n : names) {
        cout << n << "\n";
    }
    cout << "\n";
}

int main() {
    cin.tie(NULL)->sync_with_stdio(false);

    int n;
    while (cin >> n) {
        testCase(n);
    }

    return 0;
}
