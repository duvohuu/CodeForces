#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool prime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 4; i < n - 3; i++) {
        if (prime(i) == 0 && prime(n - i) == 0) {
            cout << i << " " << n - i;
            break;
        }
    }
    return 0;
}