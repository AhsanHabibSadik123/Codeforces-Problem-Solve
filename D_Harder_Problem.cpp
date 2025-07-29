#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n;
    cin >> n;
    unordered_map<int , int>mp;
    vector<int>a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(mp[x] == 0){
            a.push_back(x);
        }
        mp[x]++;
    }
    int w = 5 + mp[8];
    if(a.size() == n){
        for(auto i : a){
            cout << i << ' ';
        }
        cout << nl;
    }else{
        int i = 0;
        vector<int>b;
        for(i = 1; i <= n; i++){
            if(mp[i] == 0){
                b.push_back(i);
            }
        }
        for(auto i : a){
            cout << i << ' ';
        }
        for(auto i : b){
            cout << i << ' ';
        }
        cout << nl;
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
