#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    s[s.length()-1] = s[0];
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}