#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int a1 , b1 , a2 , b2 , a3 , b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    cout << a1 + a3 - a2 << ' ' << b1 + b3 - b2 << nl;
    cout << a2 + a1 - a3 << ' ' << b2 + b1 - b3 << nl;
    cout << a2 + a3 - a1 << ' ' << b2 + b3 - b1 << nl;
}
int main(){     
    sadik();
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
