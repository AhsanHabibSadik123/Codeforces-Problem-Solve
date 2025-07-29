#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , a , b;
    cin >> n >> a >> b;
    int mn = min(a , b);
    int mx = max(a , b);
    while(mn < mx){
        mn++;
        if(mn == mx){
            if(a = min(a , b)){
                cout << "NO" << nl;
            }else{
                cout << "YES" << nl;
            }
        }
        mx--;
        if(mn == mx){
            if(a = min(a , b)){
                cout << "YES" << nl;
            }else{
                cout << "NO" << nl;
            }
        }
    }
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
