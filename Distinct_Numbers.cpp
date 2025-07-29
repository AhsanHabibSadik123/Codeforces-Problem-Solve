#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    set<int>st;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size();
}
int main(){     
    sadik();
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
