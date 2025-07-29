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
    int l = 0 , r = n - 1;
    int sum1 = a[0] , sum2 = a[n-1] , ans = 0;
    while(l < r){
        if(sum1 == sum2){
            ans = max(ans , l + n - r + 1);
        }
        if(sum1 < sum2){
            l++;
            sum1 += a[l];
        }else{
            r--;
            sum2 += a[r];
        }
    }
    cout << ans << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
