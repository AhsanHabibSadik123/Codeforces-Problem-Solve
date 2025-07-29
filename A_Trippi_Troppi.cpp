#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

void solve(){ 
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin, a);
        cout << a[0];
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == ' ') {
                cout << a[i+1];
            }
        }
        cout << nl;
    }
    
}

int main(){     
    sadik();
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
