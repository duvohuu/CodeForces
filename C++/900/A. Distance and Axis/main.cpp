#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n <= k) {
            cout << k - n << endl;
            continue;
        }
        if ((n - k) % 2 != 0) {
            cout << "1" << endl;
        }
        else cout << "0" << endl;
    }
    return 0;
}