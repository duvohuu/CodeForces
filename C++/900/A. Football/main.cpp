#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 1;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) count++;
        else count = 1;
        if (count == 7) {
            break;
        }
    }
    if (count == 7) cout << "YES";
    else cout << "NO";
    return 0;
}