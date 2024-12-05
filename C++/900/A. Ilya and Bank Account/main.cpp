#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (stoll(s) >= 0) {
        cout << s;
        return 0;
    }
    if ((s[s.length() - 1] - '0') < (s[s.length() - 2] - '0')) {
        s.erase(s.end() - 2);
    }
    else {
        s.erase(s.end() - 1);
    }
    cout << stoll(s);
    return 0;
}