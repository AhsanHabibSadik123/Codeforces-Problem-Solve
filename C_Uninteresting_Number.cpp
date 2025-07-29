#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    string a;
    cin >> a;
    int n = 0 , c2 = 0 , c3 = 0;
    for(int i = 0; i < a.size(); i++){
        n += a[i] - '0';
        if(a[i] == '2'){
            c2++;
        }
        if(a[i] == '3'){
            c3++;
        }
    }
    for(int i = 0; i <= min(20 , c2); i++){
        for(int j = 0; j <= min(20 , c3); j++){
            if((n + i * 2 + j * 6) % 9 == 0){
                cout << "YES" << nl;
                return;
            }
        }
    }
    cout << "NO" << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
