#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a = n / 2;
    int b = n - 2 * a;
    if (b == 0) {
        cout << a << endl;
        for (int i = 0; i < a; i++) {
            cout << "2" << " ";
        }
    }
    else {
        cout << a << endl << "3" << " ";
        for (int i = 0; i < a - 1; i++) {
            cout << "2" << " ";
        }
    }
    return 0;
}