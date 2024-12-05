#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t;
    ll n, x, temp;
    cin >> t;
    while (t--) {
        ll maxresult = 0, minresult, value = 0, key;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            value += temp;
            key = (!(temp % x)) ? temp / x: 1 + (temp / x);
            maxresult += key;
        }
        minresult = (!(value % x)) ? value / x: 1 + (value / x);

        cout << minresult << " " << maxresult << endl;

    }

    return 0;
}