#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, check = 1;
        cin >> n;
        int a[n];
        long long count = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            count += i;
            sum += a[i];
            if (count > sum) {
               check = 0;
            }
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}