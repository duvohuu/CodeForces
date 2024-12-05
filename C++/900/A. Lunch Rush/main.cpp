#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long max_joy = LLONG_MIN;
    while (n--) {
        long long f, t;
        cin >> f >> t;
        long long joy = (t > k) ? (f - (t - k)) : f;
        max_joy = max(joy, max_joy);
    }
    cout << max_joy << endl;
    return 0;
}