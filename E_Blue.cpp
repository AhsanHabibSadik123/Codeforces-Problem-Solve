#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    if(n == 3 || n == 1){
        cout << "NO" << nl;
    }else{
        cout << "YES" << nl;
        if(n & 1){
            int x = n / 2;
            for(int i = 0; i < n / 2; i++){
                cout << x - 1 << ' ' << -x << ' ';
            }
            cout << x - 1;
        }else{
            for(int i = 0; i < n / 2; i++){
                cout << "1 -1 ";
            }
        }
        cout << nl;
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
