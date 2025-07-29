#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

int f(int n){
    for(int i = 0; i < n; i += 2){
        cout << i << nl;
    }
    if(n <= 0){
        return 1;
    }else{
        return 1 + f(n - 5);
    }
}

void solve(){ 
    f(20);
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
