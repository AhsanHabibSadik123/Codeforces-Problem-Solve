#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cnt++;
        }
    }
    cout << cnt << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
