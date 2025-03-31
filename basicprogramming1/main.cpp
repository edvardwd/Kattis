#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using usll = unordered_set<ll>;

ll median(ll a0, ll a1, ll a2){
    vll nums{a0, a1, a2};
    sort(nums.begin(), nums.end());
    return nums[1];
}

ll sum(vll a, bool even = false){
    ll total = 0;
    for (const ll& num : a){
        if (even && num % 2) continue;
        total += num;
    }
    return total;
}

string toText(vll a){
    string s;
    char c;
    for (const ll& num : a){
        c = char(num % 26) + 'a';
        s += c;
    }
    return s;
}

void case7func(vll a, ll n){
    usll seen;
    ll i = 0;
    while (true){
        seen.insert(i);
        i = a[i];
        if (i >= n){
            cout << "Out\n";
            break;
        }
        else if (i == n - 1){
            cout << "Done\n";
            break;
        }
        else if (seen.find(i) != seen.end()){
            cout << "Cyclic\n";
            break;
        }
    }
}

int main(){
    ll n, t, num;
    cin >> n >> t;

    vll a;

    //load input
    for (ll i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }

    switch (t)
    {
    case 1:
        cout << "7\n";
        break;
    case 2:
        if (a[0] > a[1]) cout << "Bigger\n";
        else if (a[0] == a[1]) cout << "Equal\n";
        else cout << "Smaller\n";
        break;
    case 3:
        cout << median(a[0], a[1], a[2]) << "\n";
        break;
    case 4:
        cout << sum(a) << "\n";
        break;
    case 5:
        cout << sum(a, true) << "\n";
        break;
    case 6:
        cout << toText(a) << "\n";
        break;
    case 7:
        case7func(a, n);
        break;
    default:
        break;
    }


    return 0;
}