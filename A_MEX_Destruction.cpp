#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , c = 0;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            c++;
        }
    }
    if(c == n){
        cout << 0 << nl;
    }else{
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                int x = 0;
                for(int j = i; j < n; j++){
                    if(a[j] > 0){
                        x++;
                        break;
                    }
                }
                for(int j = i; j >= 0; j--){
                    if(a[j] > 0){
                        x++;
                        break;
                    }
                }
                if(x == 2){
                    cout << 2 << nl;
                    return;
                }
            }
        }
        cout << 1 << nl;
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
