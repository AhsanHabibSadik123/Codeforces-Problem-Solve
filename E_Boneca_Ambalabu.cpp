#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> bitCount(30, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 30; j++) {
            if (a[i] & (1 << j)) {
                bitCount[j]++;
            }
        }
    }

    ll maxSum = 0;

    for (int i = 0; i < n; i++) {
        ll sum = 0;
        for (int j = 0; j < 30; j++) {
            int cnt1 = bitCount[j];
            int cnt0 = n - cnt1;

            if (a[i] & (1 << j)) {
                sum += 1LL * cnt0 * (1 << j);
            } else {
                sum += 1LL * cnt1 * (1 << j);
            }
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << nl;
}

int main() {
    sadik();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
