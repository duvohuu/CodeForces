#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    int a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        if (a + b == c) cout << "+" << endl;
        else cout << "-" << endl;
    }
    return 0;
}