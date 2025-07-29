#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7

vector<int>parent(10);

int find(int u){
    if(parent[u] != u){
        parent[u] = find(parent[u]);
    }
    return parent[u];
}

void unionSet(int u , int v){
    if(find(u) != find(v)){
        parent[u] = find(v);
    }
}
int main(){     
    //sadik();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        parent[i] = i;
    }
    for(int i = 0; i < n; i++){
        int ck;
        cin >> ck;
        if(ck == 0){
            int u , v;
            cin >> u >> v;
            unionSet(u , v);
        }else{
            int u , v;
            cin >> u >> v;
            if(find(u) == find(v)){
                cout << "Same" << nl;
            }else{
                cout << "Not same" << nl;
            }
        }
    }
    return 0;
}
