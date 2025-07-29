#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD (ll)(1e9 + 7)

void solve() { 
    string a;
    cin >> a;
    int n = a.size();
    int x = 10;
    while(x--){
        for(int i = 1; i < n; i++){
            char ch = a[i];
            if(ch > '0'){
                ch--;
                if(ch > a[i-1]){
                    a[i] = a[i-1];
                    a[i-1] = ch;
                }
            }
        }
    }
    cout << a << nl;


    while(x--){
        if()
    }
}
int main() {     
    sadik();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
