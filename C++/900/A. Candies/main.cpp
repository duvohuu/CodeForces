#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> n;
        int k = 2;
        int power = pow(2, k - 1) + 1;
        while (n % power != 0) {
            k++;
            power += pow(2, k - 1);
        }
        x = n / (pow(2, k) - 1);
        cout << x << endl;
    }
    return 0;
}