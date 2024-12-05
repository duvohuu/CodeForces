#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        string s;
        cin >> s;
        int lengths = s.length();
        if (lengths % 2 == 1) cout << "NO" << endl;
        else {
            char fchar = s[0];

            int lengthsample = s.length() / 2;
            string sample = s.substr(0, lengthsample);
            s = s.substr(lengthsample);
            int count = 1;
            if (sample == s) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }  
    return 0;
}