#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    map<int , int>mp;
    for(int i = 0; i < n; i++){
        int l , r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    int sum = 0 , ans = -1;
    for(auto i : mp){
        sum += i.second;
        ans = max(ans , sum);
    }
    cout << ans << nl;
}
int main(){     
    sadik();
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
