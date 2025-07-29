#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

vector<vector<pair<int, int>>> adj; // Adjacency list
vector<bool> vis;                  // Visited array

int prim(int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> minEdge(n + 1, 1e9); // Minimum weight edge to each node
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


void solve(){ 
    int n , m;
    cin >> n >> m;
    adj = vector<vector<pair<int , int>>>(n + 1);
    vis = vector<bool>(n + 1 , false);
    for(int i = 0; i < m; i++){
        int u , v , wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v , wt});
        adj[v].push_back({u , wt});
    }
    cout << prim(n);

    
}
int main(){     
    sadik();
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}


void g(int n){
    if(n == 1) return;
    g(n - 1);
    g(n - 1);
}