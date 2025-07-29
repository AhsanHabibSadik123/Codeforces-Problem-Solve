#include <bits/stdc++.h>
using namespace std;
#define sadik()ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){
    int n;
    cin >> n;
    map<ll, ll> mp;
    map<ll, ll> ans;
    for (int i = 0; i < n; i++){
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    ll sum = 0;
    for (auto &i : mp){
        sum += i.second;
        i.second = sum;
    }
    int c = 0;
    ll preKey = -1 , preVal = -1;
    for(auto i : mp){
        if(c == 0){
            preKey = i.first;
            preVal = i.second;
            c = 1;
            continue;
        }
        ans[preVal] += i.first - preKey;
        preKey = i.first;
        preVal = i.second; 
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << ' ';
    }
}
int main(){
    sadik();
    int t = 1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
