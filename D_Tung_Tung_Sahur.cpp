#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    // Count how many numbers have bit i set
    vector<int> bitCount(30, 0);
    for (ll num : a) {
        for (int i = 0; i < 30; ++i) {
            if (num & (1 << i)) bitCount[i]++;
        }
    }

    ll maxSum = 0;
    for (ll num : a) {
        ll sum = 0;
        for (int i = 0; i < 30; ++i) {
            int cnt1 = bitCount[i];
            int cnt0 = n - cnt1;
            if (num & (1 << i))
                sum += 1LL * cnt0 * (1 << i);
            else
                sum += 1LL * cnt1 * (1 << i);
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << nl;
}

int main() {
    sadik();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
