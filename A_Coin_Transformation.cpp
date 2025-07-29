#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    ll n;
    cin >> n;
    ll ans = 0;
    while(n > 3){
        ans++;
        n /= 4;
    }
    //cout << ans << nl;
    cout << (1 << ans) << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

