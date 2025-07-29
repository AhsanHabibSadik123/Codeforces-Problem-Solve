#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    vector<pair<int , int>>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> a[i].second;
    }
    ll res = INT_MIN;
    for(int i = 0; i < n; i++){
        ll total = 0;
        for(int j = 0; j < n; j++){
            if(i != j){
                total += max(a[j].first , a[j].second);
            }
        }
        res = max(res , total + a[i].first + a[i].second);
    }
    cout << res << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
