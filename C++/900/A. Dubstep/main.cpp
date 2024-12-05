#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, result;
    cin >> s;
    int i = 0, j = 0;
    while (i < s.length()) {
        string temp = s.substr(i, 3);
        if (temp == "WUB") {
            if (result.length() > 0 && result[j - 1] != ' ') {
                result += ' ';
                j++;
            }
            i += 3;
            continue;
        }
        else {
            result += s[i];
            i++;
            j++;
        }
    }
    cout << result;
    return 0;
}