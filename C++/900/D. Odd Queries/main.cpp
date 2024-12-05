#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        vector<int> v(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i]; 
            if (i > 0) v[i] += v[i - 1];
        }
        while (q--) {
            int l, r, k, sum; 
            cin >> l >> r >> k;
            sum = v.back() - v[r] + v[l - 1] + ( r - l + 1) * k;
            cout << (sum & 1 ? "YES\n" : "NO\n" ) ;
        }
    }
}