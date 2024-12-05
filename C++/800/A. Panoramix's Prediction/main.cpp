#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    int i;
    for (i = n + 1; i < 52; i++) {
        if (prime(i)) {
            break;
        }
    }
    if (i == m) cout << "YES";
    else cout << "NO";
    return 0;
}