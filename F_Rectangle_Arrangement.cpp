#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    int mx1 = -1, mx2 = -1;
    for(int i = 0; i < n;i++){
        int x , y;
        cin >> x >> y;
        mx1 = max(mx1 , x);
        mx2 = max(mx2 , y);
    }
    cout << 2 * (mx1 + mx2) << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
