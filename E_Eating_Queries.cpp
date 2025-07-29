#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , q;
    cin >> n >> q;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.rbegin() , a.rend());
    for(int i = 1; i < n; i++){
        a[i] += a[i-1];
    }
    while(q--){
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        if(x > a[n-1]){
            cout << -1 << nl;
            continue;
        }
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] == x){
                l = mid;
                break;
            }else if(a[mid] < x){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << l + 1 << nl;
    }
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
