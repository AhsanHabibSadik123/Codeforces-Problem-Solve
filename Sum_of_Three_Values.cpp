#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

void solve() { 
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int target = x - a[i] - a[j];
            if (mp.count(target)) {
                int k = mp[target];
                if (k != i && k != j) {
                    cout << k + 1 << " " << i + 1 << " " << j + 1 << nl;
                    return;
                }
            }
        }
        mp[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << nl;
}

int main() {     
    sadik();
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}
