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
    unordered_map<int , int>mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a.begin() , a.end());
    int mx = -1;
    for(auto i : mp){
        if(i.second > 2){
            mx = max(mx , i.first);
        }
    }
    if(mx == -1){
        cout << -1 << nl;
        return;
    }
    if(mp[mx] > 3){
        cout << mx << ' ' << mx << ' ' << mx << ' ' << mx << nl;
    }else if(mp[mx] > 2){
        for(int i = 0; i < n; i++){
            if(a[i] < 3 * mx && a[i] != mx){
                cout << mx << ' ' << mx << ' ' << mx << ' ' << a[i] << nl;
                return;
            }
        }
        for(int i = 0; i < n - 1; i++){
            if(a[i] != mx){
                if(a[i+1] - a[i] < 2 * mx){
                    cout << mx << ' ' << mx << ' ' << a[i+1] << ' ' << a[i] << nl;
                    return;
                }
            }
        }
    }else{
        for(int i = 0; i < n - 1; i++){
            if(a[i] != mx){
                if(a[i+1] - a[i] < 2 * mx){
                    cout << mx << ' ' << mx << ' ' << a[i+1] << ' ' << a[i] << nl;
                    return;
                }
            }
        }
        cout << -1 << nl;
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
