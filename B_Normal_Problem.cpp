#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    string a , az;
    cin >> a;
    az = a;
    for(int i = a.size()-1; i >= 0; i--){
        if(a[i] == 'p'){
            cout << 'q';
        }else if(a[i] == 'q'){
            cout << 'p';
        }else{
            cout << a[i];
        }
    }
    cout << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
