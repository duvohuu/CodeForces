#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool odddivisor(long long n) {
    if (n < 3) return false;
    else if (n % 2 != 0) return true;
    while (n / 2 > 1) {
        n /= 2;
        if (n % 2 != 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (odddivisor(n)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
