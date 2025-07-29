#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    string a;
    cin >> a;
    int i = 0 , n = a.size();
    for(i = 0; i < n; i++){
        if(a[i] == '0'){
            break;
        }
    }
    if(n - i == 0){
        cout << 1 << ' ' << n << ' ' << "1 1" << nl;
        return;
    }
    int len = n - i , ans = 0;
    string str = a.substr(i , len);
    string instr = str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1'){
            instr[i] = '0';
        }else{
            instr[i] = '1';
        }
    }
    for(int i = 0; i < n - len; i++){
        string x = a.substr(i , len);
        if(str <= x && x <= instr){
            if(str < x){
                str = x;
                ans = i;
            }
        }
    }
    cout << 1 << ' ' << n << ' ' << ans + 1 << ' ' << ans + len << nl;
    //cout << str << ' ' << instr << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
