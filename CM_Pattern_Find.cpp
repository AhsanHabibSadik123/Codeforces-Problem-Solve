#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

void constructLps(string &pat, vector<int> &lps) {
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < pat.length()) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

vector<int> search(string &txt, string &pat){
    int n = txt.length();
    int m = pat.length();
    vector<int> lps(m);
    vector<int> res;
    constructLps(pat, lps);
    int i = 0;
    int j = 0;
    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
            if (j == m) {
                res.push_back(i - j);
                j = lps[j - 1];
            }
        }
        else{
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return res;
}

void solve(){
    string txt , pat;
    cin >> txt >> pat;
    vector<int>res = search(txt , pat);
    if(res.size() == 0){
        cout << "Not Found" << nl << nl;
        return;
    }
    cout << res.size() << nl;
    for(auto i : res){
        cout << i + 1 << ' ';
    }
    cout << nl << nl;
}

int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}