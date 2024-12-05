#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    int ways = 0;
    for (int i = 0; i < n; ++i) {
        if ((sum - a[i]) % 2 == 0) ways++;
    }
    cout << ways;
    return 0;
}