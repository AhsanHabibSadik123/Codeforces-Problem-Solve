#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << a[0] + x << nl;
        return;
    }
    sort(a.begin() , a.end());
    ll l = 0 , r = 2e9 + 7 , mid , ans = -1;
    while(l <= r){
        mid = (l + r) / 2;
        int xx = x;
        for(int i = 0; i < n; i++){
            if(a[i] < mid){
                xx -= (mid - a[i]);
            }
            if(xx < 0){
                break;
            }
        }
        if(xx == 0){
            ans = mid;
            break;
        }else if(xx < 0){
            r = mid - 1;
        }else{
            ans = mid;
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
