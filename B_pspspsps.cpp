#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    string a;
    cin >> a;
    if(a[0] == 's'){
        a[0] = '.';
    }
    if(a.back() == 'p'){
        a.back() == '.';
    }
    if(a.find('p') && a.find('s')){
        cout << "YES" << nl;
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
