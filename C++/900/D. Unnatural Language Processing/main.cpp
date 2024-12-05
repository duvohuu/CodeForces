#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, size = 0; string s;
    cin >> n >> s;
    queue <char> q;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || q.empty()) {
            q.push(s[i]);
            ++size;
        }
        else if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && (s[i + 1] == 'b' || s[i + 1] == 'c' || s[i + 1] == 'd' || i == n - 1) && size < 3) {
            q.push(s[i]);
            ++size;
        }
        else {
            while (!q.empty()) {
                cout << q.front();
                q.pop();
                --size;
            }
            cout << ".";
            q.push(s[i]);
            ++size;
        }

    }
    while (!q.empty()) {
        cout << q.front();
        q.pop();
        --size;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}