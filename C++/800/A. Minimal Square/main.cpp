#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int wide = (a < b) ? 2 * a : 2 * b;
        int length = (a > b) ? a : b;
        int max = (wide > length) ? wide : length;
        cout << pow(max, 2) << endl;
    }
    return 0;
}


