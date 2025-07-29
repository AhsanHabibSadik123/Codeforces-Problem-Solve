#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        if(a[i-1] > a[i]){
            cout << "NO" << nl;
            return;
        }else{
            int mn = min(a[i-1] , a[i]);
            a[i-1] -= mn;
            a[i] -= mn;
        }
    }
    cout << "YES" << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
