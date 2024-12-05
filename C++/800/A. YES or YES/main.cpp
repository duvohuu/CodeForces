#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i =  0; i < s.size(); i++) {
            if (s[i] > 96)
                s[i] -= 32;
        }
        if (s == "YES")
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}