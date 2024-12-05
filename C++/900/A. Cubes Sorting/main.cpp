#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, cnt = 0, x, temp;
    cin >> n;
    cin >> x;
    temp = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < temp) ++cnt;
        temp = x;
    }
    if (cnt == n - 1) cout << "NO" << endl;
    else cout << "YES" << endl;
   

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}