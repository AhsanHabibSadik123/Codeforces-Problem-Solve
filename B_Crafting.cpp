    #include<bits/stdc++.h>
    using namespace std;
    #define sadik() ios::sync_with_stdio(false);cin.tie(0)
    #define ll long long int
    #define nl '\n'
    #define MOD 1e9 + 7
    void solve(){ 
        int n;
        cin >> n;
        vector<pair<int , int>>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
        }
        for(int i = 0; i < n; i++){
            cin >> a[i].second;
        }
        int cnt = 0 , ind = -1;
        for(int i = 0; i < n; i++){
            if(a[i].first < a[i].second){
                cnt++;
                ind = i;
                if(cnt == 2){
                    cout << "NO" << nl;
                    return;
                }
            }
        }
        if(cnt == 0){
            cout << "YES" << nl;
            return;
        }
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            if(a[i].first >= a[i].second){
                mn = min(mn , a[i].first - a[i].second);
            }
        }
        if(mn >= a[ind].second - a[ind].first){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
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