#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

vector<vector<int>>adj;
vector<bool>vis;

void dfs(int src){
    vis[src] = true;
    for(auto i : adj[src]){
        if(vis[i]) continue;
        dfs(i);
    }
}

int main(){     
    sadik();
    int n , m;
    cin >> n >> m;
    adj = vector<vector<int>>(n + 1);
    vis = vector<bool>(n+1 , false);
    for(int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>road;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            road.push_back(i);
            dfs(i);
        }
    }
    cout << road.size() - 1 << nl;
    for(int i = 1; i < road.size(); i++){
        cout << road[0] << ' ' << road[i] << nl;
    }
    return 0;
}
