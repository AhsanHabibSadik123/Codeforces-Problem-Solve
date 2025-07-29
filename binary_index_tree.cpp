#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

const int N = 20;
vector<int>bit(N , 0);

void update(int i , int x){
    for( ; i < N; i += (i & -i)){
        bit[i] += x;
    }
}

int sum(int i){
    int ans = 0;
    for( ; i > 0; i -= (i & -i)){
        ans += bit[i];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
        update(i , a[i]);
    }

    for(int i = 1; i < N; i++){
        cout << bit[i] << ' ';
    }
    cout << nl;

    // int q;
    // cin >> q;
    // while(q--){
    //     int ck;
    //     cin >> ck;
    //     if(ck == 0){
    //         int l , r;
    //         cin >> l >> r;
    //         cout << sum(r) - sum(l-1) << nl;
    //     }else{
    //         int i , x;
    //         cin >> i >> x;
    //         update(i , x);
    //     }
    // }
    return 0;
}
