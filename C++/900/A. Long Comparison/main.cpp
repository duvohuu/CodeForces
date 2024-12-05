#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;

void solve() {
    string x1, x2;
    int p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    if (x1.size() + p1 == x2.size() + p2) {
        while (x1.size() < x2.size()) {
            x1 += '0';
        }
        while (x1.size() > x2.size()) {
            x2 += '0';
        }
        for (int i = 0; i < x1.size(); i++) {
            if (x1[i] > x2[i]) {
                cout << ">" << endl;
                return;
            }
            else if (x1[i] < x2[i]) {
                cout << "<" << endl;
                return;
            }
        }
        cout << "=" << endl;
        return;
    }
    cout << ((x1.size() + p1 > x2.size() + p2) ? ">" : "<") << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}