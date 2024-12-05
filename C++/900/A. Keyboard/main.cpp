#include <bits/stdc++.h>

using namespace std;

int main() {
    char x;
    cin >> x;
    string ex = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    cin >> s;
    string result = "";
    int shift = (x == 'L') ? 1 : -1;
    for (int i = 0; i < s.length(); i++) {
        auto pos = ex.find(s[i]);
        
        result += ex[pos + shift];
    }
    cout << result;

    return 0;
}