#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , r;
    cin >> n >> r;
    int ans = 0 , cnt = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x & 1){
            ans += x - 1;
            cnt++;
        }else{
            ans += x;
        }
    }
    r -= (ans / 2);
    while(r < cnt){
        r--;
        cnt -= 2;
    }
    cout << ans + cnt << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}