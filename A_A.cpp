#include<bits/stdc++.h>
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define pb push_back
using namespace std;

vector<vector<pair<ll, ll>>>adj;
vector<ll>dis;

void dijsktra(vector<vector<pair<ll, ll>>> &adj , vector<ll> &dis , int src){
    dis[src] = 0;
    priority_queue <pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>pq;
    pq.push({dis[src], src});

    while(!pq.empty()){
        pair<ll, ll>t = pq.top();
        pq.pop();
        ll cost = t.first;
        ll node = t.second;
        if(dis[node] < cost) continue;
        for(auto c: adj[node]){
            ll dest = c.first;
            ll cst = c.second;
            if(dis[dest] > dis[node] + cst){
                dis[dest] = dis[node] + cst;
                pq.push({dis[dest], dest});
            }
        }
    }
}
void solve(){   
    int n , m;
    cin >> n >> m;
    dis = vector<ll>(n + 1 , LLONG_MAX);
    adj = vector<vector<pair<ll , ll>>>(n + 1);
    for(int i = 0; i < m; i++){
        ll u , v , wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v , wt});
        //adj[v].push_back({u , wt});
    }
    dijsktra(adj , dis , 1);
    for(int i = 1; i < dis.size(); i++){
        cout << dis[i] << ' ';
    }
}
int main(){     
    sadik();
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}

