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
    ll sum = 0;
    int e = 0 , mxe = -1 , o = 0 , mxo = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i] % 2 == 0){
            e++;
            mxe = max(mxe , a[i]);
        }else{
            o++;
            mxo = max(mxo , a[i]);
        }
    }
    if(e == 0 || e == n){
        cout << 0 << nl;
    }else{
        sort(a.begin() , a.end());
        ll mo = mxo;
        for(int i = 0; i < n; i++){
            if(!(a[i] & 1)){
                if(a[i] > mo){
                    cout << e + 1 << nl;
                    return;
                }
                mo += a[i];
            }
            if(mo > mxe){
                cout << e << nl;
                return;
            }
        }
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
