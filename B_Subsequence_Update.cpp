#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , l , r;
    cin >> n >> l >> r;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = 0 , curr = 0;
    for(int i = l; i < r; i++){
        curr += a[i];
    }
    int x = l , y = r;
    while(x > 0){
        ans = min(ans , curr);
        curr -= a[y];
        y--;
        curr += a[x-1];
        x--;
        ans = min(ans , curr);
    }
    x = l , y = r;
    while(r < n - 1){
        ans = min(ans , curr);
        curr -= a[x];
        x++;
        curr += a[y+1];
        y++;
        ans = min(ans , curr);
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
