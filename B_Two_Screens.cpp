#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    string a , b;
    cin >> a >> b;
    int i = 0 , c = 0;
    while(i < a.size() && i < b.size() && a[i] == b[i]){
        c++;
        i++;
    }
    if(c > 0){
        cout << a.size() - c + b.size() - c + c + 1 << nl;
    }else{
        cout << a.size() + b.size() << nl;
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
