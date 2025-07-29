#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    ll n , sum = 0;
    cin >> n;
    vector<ll>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(n == 1 || n == 2){
        cout << -1 << nl;
        return;
    }
    sort(a.begin() , a.end());
    ll l = 0 , r = 1e14 , ans = 0;
    while(l <= r){
        ll mid = (l + r) / 2;
        ll sum1 = sum;
        sum1 += mid;
        double avg = (double)sum1 / n;
        int c = 0;
        bool ok = false;
        for(int i = 0; i < n; i++){
            if(a[i] < (double)avg / 2){
                c++;
            }
        }
        if(c > n / 2){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
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
