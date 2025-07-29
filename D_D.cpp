#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'

void solve() {
    ll n, w, b;
    cin >> n >> w >> b;
    if (w == 0 || b == 0) {
        cout << 0 << nl;
        return;
    }
    ll ans = 0;
    for (ll i = 0; i <= n; i += w) {
        ll x = n - i;
        if (x >= 0 && x % b == 0) {
            ans++;
        }
    }

    cout << ans << nl;
}

int main() {
    sadik();
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
