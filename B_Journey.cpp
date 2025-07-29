#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , a , b , c;
    cin >> n >> a >> b >> c;
    int total = a + b + c;
    int ans = n / total;
    ans = ans * 3;
    n = n % total;
    if(n > 0){
        ans++;
        n -= a;
    }
    if(n > 0){
        ans++;
        n -= b;
    }
    if(n > 0){
        ans++;
        n -= c;
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
