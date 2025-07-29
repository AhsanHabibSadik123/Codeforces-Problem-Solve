#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ll l = sum - y;
    ll r = sum - x;
    sort(a.begin(), a.end());
    ll res = 0;
    for (int i = 0; i < n; i++) {
        ll tmin = l - a[i];
        ll tmax = r - a[i];
        int low = lower_bound(a.begin() + i + 1, a.end(), tmin) - a.begin();
        int high = upper_bound(a.begin() + i + 1, a.end(), tmax) - a.begin();
        res += high - low;
    }
    cout << res << nl;
}

int main() {     
    sadik();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
