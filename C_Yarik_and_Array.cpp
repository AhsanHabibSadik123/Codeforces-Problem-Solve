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
    int curr = 0, ans = INT32_MIN;
    for(int i = 0; i < n; i++){
        if(curr < 0 || i > 0 && abs(a[i-1]) % 2 == abs(a[i]) % 2){
            curr = 0;
        }
        curr += a[i];
        if(curr > ans){
            ans = curr;
        }
        
    }
    cout << ans << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
