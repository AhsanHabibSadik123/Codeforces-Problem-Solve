#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , k;
    cin >> n >> k;
    int c = 0;
    if(((n + 1) / 2) >= k){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j && (i & 1) && c < k){
                    cout << 'R';
                    c++;
                }else{
                    cout << '.';
                }
            }
            cout << nl;
        }
    }else{
        cout << -1 << nl;
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
