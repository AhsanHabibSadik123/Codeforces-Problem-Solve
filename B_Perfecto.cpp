#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "-1\n";
        return;
    }

    vector<int> p(n);
    int curr = n;
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            p[i] = curr - 1;
            p[i + 1] = curr;
            curr -= 2;
        } else {
            p[i] = curr;
        }
    }

    for (int num : p) {
        cout << num << " ";
    }
    cout << nl;
}

int main() {
    sadik();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
