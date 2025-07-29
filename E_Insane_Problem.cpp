#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1000000007
double func(double x){
    cout << x * x * x - x * x + 2;
}
void solve() {
    double x;
    cin >> x;
    cout << func(x);
}
int main() {
    sadik();
    int t = 1;
    //cin >> t;
    while(t--) 
        solve();
    return 0;
}