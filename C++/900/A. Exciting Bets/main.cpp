#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        cout << abs(a - b) << " " << min(a % abs(a - b), abs(a - b) - (a % abs(a - b))) << endl;
    }
    return 0;
}