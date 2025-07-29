#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , m;
    cin >> n >> m;
    int ans = m * 4 * n;
    for(int i = 0; i < n; i++){
        int x , y;
        cin >> x >> y;
        if(i == 0){
            continue;
        }
        ans -= (m - x + m - y) * 2;
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
