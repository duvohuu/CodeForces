#include <iostream>
#include <ctype.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char &c: s) {
        c = tolower(c);
    }
    int count = 97;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == count) {
            count++;
            i = -1;
        }
        if (count == 123) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}