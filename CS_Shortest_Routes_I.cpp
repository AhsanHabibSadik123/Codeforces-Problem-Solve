#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define nl '\n'
 
vector<vector<pair<ll, ll>>> adj;
vector<ll> dist;

void dijkstra(int src) {
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dist[src] = 0;
    pq.push({0, src});
 
    while (!pq.empty()) {
        auto node = pq.top();
        pq.pop();
        ll cost = node.first;
        ll parent = node.second;
        if (dist[parent] < cost) continue;
        for (auto &c : adj[parent]) {
            ll cst = c.second;
            ll dest = c.first;
            if (dist[dest] > cost + cst) {
                dist[dest] = cost + cst;
                pq.push({dist[dest], dest});
            }
        }
    }
}
 
int main() {
    sadik();
    ll n, m;
    cin >> n >> m;
 
    adj = vector<vector<pair<ll, ll>>>(n + 1);
    dist = vector<ll>(n + 1, LONG_LONG_MAX);

    for (int i = 0; i < m; i++) {
        ll u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++) {
        cout << dist[i] << ' ';
    }
    cout << nl;
}