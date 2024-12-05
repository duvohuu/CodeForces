#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int plus = n / m;
    while (plus > 0) {
        n++;
        plus--;
        if (n % m == 0) {
            plus++;
        }
    }
    cout << n;

    return 0;
}