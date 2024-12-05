#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        if (n * (a - b) <= c + d && n * (a + b) >= c - d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}