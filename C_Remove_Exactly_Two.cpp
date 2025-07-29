#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

void printAll(vector<int> &a){
    for(int i = 1; i < a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << nl;
}

vector<vector<int>>adj;
vector<bool>vis;
 
void dfs(int src){
    vis[src] = true;
    for(auto i : adj[src]){
        if(vis[i]) continue;
        dfs(i);
    }
}

void solve(){ 
    int n;
    cin >> n;

    adj.clear();
    vis.clear();
    adj = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1 , false);

    vector<int>inOut(n + 1 , 0);
    for(int i = 1; i < n; i++){
        int u , v;
        cin >> u >> v;
        inOut[u]++;
        inOut[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin() , adj[i].end());
    }
    
    int mnEdge = -1 , ind1 = -1 , ind2 = -1;
    for(int i = 1; i <= n; i++){
        if(inOut[i] > mnEdge){
            mnEdge = inOut[i];
            ind1 = i;
        }
    }
    for(auto i : adj[ind1]){
        adj[i].erase(find(adj[i].begin() , adj[i].end() , ind1));
        inOut[i]--;
    }
    adj[ind1].clear();
    inOut[ind1] = 0;
    // cout << ind1 << nl;
    // for(int i = 1; i <= n; i++){
    //     cout << inOut[i] << ' ';
    // }
    // int c = 0;
    // for(auto i : adj){
    //     cout << c++ << ": ";
    //     for(auto j : i){
    //         cout << j << ' ';
    //     }
    //     cout << nl;
    // }
    mnEdge = -1;
    for(int i = 1; i <= n; i++){
        if(inOut[i] > mnEdge){
            mnEdge = inOut[i];
            ind2 = i;
        }
    }
    for(auto i : adj[ind2]){
        adj[i].erase(find(adj[i].begin() , adj[i].end() , ind2));
        inOut[i]--;
    }
    
    
    adj[ind2].clear();
    inOut[ind2] = 0;


    // cout << ind1 << ' ' << ind2 << nl;
    // int c = 0;
    // for(auto i : adj){
    //     cout << c++ << ": ";
    //     for(auto j : i){
    //         cout << j << ' ';
    //     }
    //     cout << nl;
    // }





    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i] && (i != ind1 and i != ind2)){
            ans++;
            cout<<i<<endl;
            dfs(i);
        }
    }
    cout << ans << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}


// adj[1] = 2 , 3
// adj[2] = 1 , 4
// adj[3] = 1 , 5
// adj[4] = 2
// adj[5] = 3

// 