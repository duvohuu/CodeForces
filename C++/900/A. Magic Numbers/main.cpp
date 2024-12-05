#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '1' && s[i] != '4') {
            count++;
            break;
        }
        else if (s[i] == '4') {
            if (s[i - 1] == '4') {
                if (s[i - 2] != '1') {
                    count++;
                    break;
                }
            }
            else if (s[i - 1] != '1') {
                count++;
                break;
            }
        }
    }
    if (count == 1) cout << "NO";
    else cout << "YES";
    return 0;
}