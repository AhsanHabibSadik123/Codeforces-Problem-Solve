#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , m , l , r;
    cin >> n >> m >> l >> r;
    int la = 0 , ra = 0;
    while(m--){
        if(ra < r){
            ra++;
        }else{
            la--;
        }
    }
    cout << la << ' ' << ra << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
