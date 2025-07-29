#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    int a[n+1][n+1];
    set<int>st;
    vector<bool>vis(2*n+2 , false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            st.insert(a[i][j]);
        }
    }
    vector<int>p(2*n+2 , -1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            p[i+j] = a[i][j];
        }
    }
    for(int i = 1; i <= 2*n ; i++){
        if(st.count(i) == false){
            p[1] = i;
            break;
        }
    }
    for(int i = 1; i <= 2 * n; i++){
        cout << p[i] << ' ';
    }
    cout << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
