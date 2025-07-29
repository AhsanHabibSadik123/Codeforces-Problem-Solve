#include <bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1000000007

const int MAXN = 200005;

struct SegmentTree {
    vector<map<int, int>> tree;
    int n;

    SegmentTree(int size) {
        n = size;
        tree.resize(4 * n);
    }

    void build(vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node][arr[start]]++;
        } else {
            int mid = (start + end) / 2;
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            merge(tree[node], tree[2 * node], tree[2 * node + 1]);
        }
    }

    void merge(map<int, int>& parent, map<int, int>& left, map<int, int>& right) {
        parent = left;
        for (auto& p : right) {
            parent[p.first] += p.second;
        }
    }

    void update(int node, int start, int end, int idx, int oldVal, int newVal) {
        if (start == end) {
            tree[node][oldVal]--;
            if (tree[node][oldVal] == 0) {
                tree[node].erase(oldVal);
            }
            tree[node][newVal]++;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid) {
                update(2 * node, start, mid, idx, oldVal, newVal);
            } else {
                update(2 * node + 1, mid + 1, end, idx, oldVal, newVal);
            }
            merge(tree[node], tree[2 * node], tree[2 * node + 1]);
        }
    }

    int query(int node, int start, int end, int l, int r, int x) {
        if (r < start || l > end) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree[node].count(x) ? tree[node][x] : 0;
        }
        int mid = (start + end) / 2;
        int leftQuery = query(2 * node, start, mid, l, r, x);
        int rightQuery = query(2 * node + 1, mid + 1, end, l, r, x);
        return leftQuery + rightQuery;
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    SegmentTree segTree(n);
    segTree.build(a, 1, 0, n - 1);

    while (q--) {
        int ck;
        cin >> ck;
        if (ck == 0) {
            int i, val;
            cin >> i >> val;
            i--;
            int oldVal = a[i];
            segTree.update(1, 0, n - 1, i, oldVal, val);
            a[i] = val;
        } else {
            int l, r, x;
            cin >> l >> r >> x;
            l--, r--;
            cout << segTree.query(1, 0, n - 1, l, r, x) << nl;
        }
    }
}

int main() {
    sadik();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
