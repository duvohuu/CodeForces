#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t, n; 
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int &x: a) {
            cin >> x;
        }
 
        if (a[1] != a[0] && a[2] == a[1]) {
            cout << 1 << endl;
            continue;
        }
        int i;
        for (i = 1; i < n - 1; i++) {
            if (a[i] != a[i+1] && a[i] != a[i - 1]) {
                cout << i + 1 << endl;
                break;
            }
            
            else if (i == n - 2) {
                cout << i + 2 << endl;
            }
        }
        
    }
    return 0;
}