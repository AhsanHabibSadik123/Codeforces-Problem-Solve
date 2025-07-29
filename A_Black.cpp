#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int a , b , c = 0;
    cin >> a >> b;
    if(b > a){
        b--;
        swap(a , b);
        c = 1;
    }
    if(a == b){
        if(c == 0){
            cout << "Bob" << nl;
        }else{
            cout << "Alice" << nl;
        }
    }else{
        if(((a & 1) && (b & 1)) || (!(a & 1) && !(b & 1))){
            if(c == 0){
                cout << "Bob" << nl;
            }else{
                cout << "Alice" << nl;
            }
        }else{
            if(c == 0){
                cout << "Alice" << nl;
            }else{
                cout << "Bob" << nl;
            }           
        }
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
