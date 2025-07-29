#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    vector<string>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<pair<int , int>>b;
    int c = 1;
    for(int i = 0; i < n - 1; i++){
        for(int j = c; j < n; j++){
            if(a[i][j] == '1'){
                b.push_back({min(i , j) + 1 , max(i , j) + 1});
            }else{
                b.push_back({max(i , j) + 1 , min(i , j) + 1});
            }
        }
        c++;
    }
    vector<vector<int>>adj(n + 1);
    for(int i = 0; i < b.size(); i++){
        adj[b[i].first].push_back(b[i].second);
    }
    vector<pair<int , int>>ans(n);
    for(int i = 1; i <= n; i++){
        ans[i-1].first = adj[i].size();
        ans[i-1].second = i;
    }
    sort(ans.rbegin() , ans.rend());
    for(auto i : ans){
        cout << i.second << ' ';
    }
    cout << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
