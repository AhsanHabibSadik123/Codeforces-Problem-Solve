#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    string a;
    cin >> a;
    for(int i = 0; i < (1 << n); i++){
        string
        for(int j = 0; j < n; j++){
            if((i & (1 << j)) != 0){
                sum += a[j];
            }
        }
        subsetSum.push_back(sum);
    }
    ll res = LLONG_MAX;
    for(int i = 0; i < subsetSum.size(); i++){
        if(subsetSum[i] != total){
            res = min(res , abs(2 * subsetSum[i] - total));
        }
    }
    cout << res << nl;
}
int main(){     
    sadik();
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
