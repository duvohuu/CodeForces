#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int c2 = (n - n /3 ) / 2;
        int c1 = (n - 2 * c2);
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}