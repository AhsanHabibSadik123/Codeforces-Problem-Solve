#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    vector<int>b(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        sum += b[i];
    }
    int a[n + 2][sum + 2] = {0};
    for(int i = 1; i <= sum; i++){
        a[0][i] = i;
    }
    sort(b.begin() , b.end());
    for(int i = 1; i <= n; i++){
        a[i][0] = b[i-1];
    }
    a[1][a[1][0]] = 1;

    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(a[i-1][j] == 1){
                a[i][j] = 1;
                continue;
            }
            if(a[0][j] < a[i][0]){
                a[i][j] = a[i-1][j];
            }else if(a[0][j] == a[i][0]){
                a[i][j] = 1;
            }else{
                int val = a[0][j] - a[i][0];
                if(a[i-1][val] == 1){
                    a[i][j] = 1;
                }
            }
        }
    }
    vector<int>ans;
    for(int i = 1; i <= sum; i++){
        if(a[n][i]){
            ans.push_back(i);
        }
    }
    cout << ans.size() << nl;
    for(auto i : ans){
        cout << i << ' ';
    }
    
}
int main(){     
    sadik();
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
