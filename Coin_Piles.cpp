#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int a , b;
    cin >> a >> b;
    // a = a % 3;
    // b = b % 3;
    if((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)){
        cout << "YES" << nl;
    }else{
        cout << "NO" << nl;
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
