#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    int mx = -1 , mn = 100001;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mn = min(x , mn);
        mx = max(mx , x);
    }
    cout << (mx - mn) * (n - 1) << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
