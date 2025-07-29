#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , k;
    cin >> n >> k;
    vector<int>a(n + 1 , -1);
    int f = 1;
    for(int i = k-1; i < n; i += k){
        a[i] = f;
        f++;
    }
    for(int i = 0; i < n; i++){
        if(a[i] == -1){
            a[i] = f;
            f++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
