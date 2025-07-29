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
    ll sumOdd = 0 , sumEven = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i & 1){
            sumEven += a[i];
        }else
            sumOdd += a[i];
    }
    if((sumOdd + sumEven) % n == 0){
        ll x = (sumOdd + sumEven) / n;
        ll oddAvg = sumOdd / ((n+1) / 2);
        ll evenAvg = sumEven / (n / 2);
        if(x == oddAvg && x == evenAvg){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }
    }else{
        cout << "NO" << nl;
    }
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
