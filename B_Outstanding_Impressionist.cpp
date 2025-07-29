    #include <bits/stdc++.h>
    using namespace std;
     
    #define sadik() ios::sync_with_stdio(false); cin.tie(0)
    #define ll long long int
    #define nl '\n'
    #define MAXN 200010
     
    void solve() {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        vector<int> cnt(2 * n + 1, 0);
        vector<int> vec(2 * n + 1, 0);
     
        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
            if (a[i].first == a[i].second) {
                cnt[a[i].first] = 1;
                vec[a[i].first]++;
            }
        }
        for (int i = 1; i <= 2 * n; i++) {
            cnt[i] += cnt[i - 1];
        }
        for (int i = 0; i < n; i++) {
            if (a[i].first == a[i].second) {
                if (vec[a[i].first] > 1) {
                    cout << 0;
                } else {
                    cout << 1;
                }
            } else {
                int range_count = cnt[a[i].second] - cnt[a[i].first - 1];
                if (range_count == (a[i].second - a[i].first + 1)) {
                    cout << 0;
                } else {
                    cout << 1;
                }
            }
        }
        cout << nl;
    }
     
    int main() {
        sadik();
        int t;
        cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }