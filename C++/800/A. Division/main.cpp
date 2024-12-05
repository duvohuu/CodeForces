#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n <= 1399) {
            cout << "Division 4" << endl;
            continue;
        }
        else if (1400 <= n && n <= 1599) {
            cout << "Division 3" << endl;
            continue;
        }
        else if (1600 <= n && n <= 1899) {
            cout << "Division 2" << endl;
            continue;
        }
        else if (n >= 1900) {
            cout << "Division 1" << endl;
            continue;
        }

    }
    return 0;
}

