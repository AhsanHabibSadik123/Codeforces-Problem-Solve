#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
const int N = 1e6 + 7;

vector<vector<int>> adj;
vector<int> deg;

void solve() {
    int n, m;
    cin >> n >> m;

    adj = vector<vector<int>>(n);  
    deg = vector<int>(n, 0);             

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        adj[v].push_back(u);
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; i++) {
        if (deg[i] == 0) {
            pq.push({1, i});
        }
    }
    int rank = 1;
    while (!pq.empty()) {
        auto node = pq.top();
        pq.pop();
        int current_rank = node.first;
        int u = node.second;

        cout << current_rank << ' ' << u << nl;
        for (auto v : adj[u]) {
            deg[v]--;
            if (deg[v] == 0) {
                pq.push({current_rank + 1, v});
            }
        }
    }
}

int main() {
    sadik();
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cout << "Scenario #" << i << ":" << nl;
        solve();
    }

    return 0;
}
