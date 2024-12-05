#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int a[100] = {0};
        int count = 0;
        cin >> n;
        cin.ignore(1);
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (a[s[i]] == 1) {
                count++;
                break;
            }
            if (s[i] == s[i + 1]) {
                continue;
            }
            else {
                a[s[i]] = 1;
            }
        }
        if (count == 1) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    
    return 0;
}