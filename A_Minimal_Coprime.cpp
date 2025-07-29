    #include<bits/stdc++.h>
    using namespace std;
    #define sadik() ios::sync_with_stdio(false);cin.tie(0)
    #define ll long long int
    #define nl '\n'
    #define MOD 1e9 + 7
    void solve(){
        int n , l , r;
        ll sum1 = 0 , sum2 = 0;
        cin >> n >> l >> r;
        vector<int>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
     
        vector<int> b;
        for(int i = 0; i < r; i++){
            b.push_back(a[i]);
        }
        sort(b.begin() , b.end());
        for(int i = 0; i < (r - l) + 1; i++){
            sum1 += b[i];
        }
        vector<int> c;
        for(int i = l - 1; i < n; i++){
            c.push_back(a[i]);
        }
        sort(c.begin() , c.end());
        for(int i = 0; i < (r - l) + 1; i++){
            sum2 += c[i];
        }
        cout << min(sum1 , sum2) << nl;
    }
    int main(){     
        sadik();
        int t = 1;
        cin >> t;
        while(t--)
            solve();
        return 0;
    }