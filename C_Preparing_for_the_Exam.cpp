#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , m , k;
    cin >> n >> m >> k;
    map<int , bool>q;
    vector<int>a(m);
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        q[x] = true;
    }
    if(n == k){
        for(int i = 0; i < m; i++){
            cout << 1;
        }
        cout << nl;
        return;
    }
    if(n - k > 1){
        for(int i = 0; i < m; i++){
            cout << 0;
        }
        cout << nl;
        return;
    }
    for(int i = 0; i < m; i++){
        if(q[a[i]]){
            cout << 0;
        }else{
            cout << 1;
        }
    }
    cout << nl;
    a.clear();
    q.clear();
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
