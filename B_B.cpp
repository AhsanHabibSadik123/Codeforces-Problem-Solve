#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(a[0] == a[n-1]){
        cout << "NO" << nl;
    }
    else{
        cout << "YES" << nl;
        string s = "";
        int c = -1;
        for(int i = 0; i < n; i++){
            if(a[i] == a[i+1]){
                c = i;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(i == c){
                s += 'R';
            }
            else{
                s += 'B';
            }
        }
        if(c == -1){
            s[0] = 'R';
        }
        cout << s << nl;
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
