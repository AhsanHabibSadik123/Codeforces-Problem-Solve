#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

void solve() { 
    ll n, x;
    cin >> n >> x;
    ll n1 = n / 2, n2 = (n + 1) / 2;
    vector<ll> a(n1), b(n2);
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    vector<ll> subsetSum1 , subsetSum2;
    ll ans = 0;
    for (int i = 0; i < (1 << n1); i++) {
        ll sum = 0;
        for (int j = 0; j < n1; j++) {
            if (i & (1 << j)) {
                sum += a[j];
            }
        }
        subsetSum1.push_back(sum);
    }
    for (int i = 0; i < (1 << n2); i++){
        ll sum = 0;
        for (int j = 0; j < n2; j++) {
            if (i & (1 << j)) {
                sum += b[j];
            }
        }
        subsetSum2.push_back(sum);
    }
    sort(subsetSum2.begin() , subsetSum2.end());
    for(int i = 0; i < (1 << n1); i++){
        auto lb = lower_bound(subsetSum2.begin() , subsetSum2.end() , x - subsetSum1[i]);
        auto ub = upper_bound(subsetSum2.begin() , subsetSum2.end() , x - subsetSum1[i]);
        ans += (ub - lb);
    }
    cout << ans << nl;
}

int main() {     
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
