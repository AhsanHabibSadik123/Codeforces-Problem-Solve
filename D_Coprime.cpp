#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    vector<vector<int>>a(1001);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x].push_back(i + 1);
    }
    vector<int>b;
    for(int i = 0; i < 1001; i++){
        if(a[i].size() > 0){
            b.push_back(i);
        }
    }
    int ans = -1;
    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(__gcd(b[i] , b[j]) == 1){
                ans = max(ans , a[b[i]][a[b[i]].size()-1] + a[b[j]][a[b[j]].size()-1]);
            }
        }
    }
    cout << ans << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
