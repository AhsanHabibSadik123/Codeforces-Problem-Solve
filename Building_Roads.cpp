#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<pair<int, int>>> adj; // Adjacency list
vector<bool> vis;                  // Visited array

int prim(int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> minEdge(n + 1, 1e15); // Minimum weight edge to each node
    int totalWeight = 0;

    // Start from node 1
    pq.push({0, 1});
    minEdge[1] = 0;

    while (!pq.empty()) {
        pair<int, int> t = pq.top();
        pq.pop();
        int cost = t.first;
        int node = t.second;

        if (vis[node]) continue;
        vis[node] = true;
        totalWeight += cost;

        for (auto c : adj[node]) {
            int dest = c.first;
            int weight = c.second;
            if (!vis[dest] && weight < minEdge[dest]) {
                minEdge[dest] = weight;
                pq.push({weight, dest});
            }
        }
    }

    return totalWeight;
}

void solve() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<pair<int, int>>>(n + 1);
    vis = vector<bool>(n + 1, false);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // Since Prim's requires an undirected graph
    }

    int mstWeight = prim(n);
    cout << "Total weight of the MST: " << mstWeight << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    // cin >> test;
    while (test--)
        solve();
}
