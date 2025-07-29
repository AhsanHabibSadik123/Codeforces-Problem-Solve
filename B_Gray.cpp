#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i = 0; i < n - 1; i++){
        if(a[i] == 'R' && a[i+1] == 'L'){
            cout << 0 << nl;
            return;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(a[i] == 'L' && a[i+1] == 'R'){
            cout << i + 1 << nl;
            return;
        }
    }
    cout << -1 << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
