#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    int x = 0 , i = 1;
    while(x >= -n && x <= n){
        if(i & 1){
            x -= 2 * i - 1;
        }else{
            x += 2 * i - 1;
        }
        i++;
    }
    if(i & 1){
        cout << "Kosuke" << nl;
    }else{
        cout << "Sakurako" << nl;
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
