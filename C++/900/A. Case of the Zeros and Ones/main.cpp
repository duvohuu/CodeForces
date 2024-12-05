#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int remove (vector<char> s, int i, int j) {
    while (i >= 0 && j < s.size()) {
        if (s[i] != s[j]) {
            s.erase(s.begin() + i - 1);
            s.erase(s.begin() + j - 1);
            if (i != 0 && j != 1) {
                --i;
                --j;
            }

        }
        else {
            i++; j++;
        }
    }
    return s.size();
}


int main() {
    int n;
    cin >> n;
    vector<char> s(n);
    cin.ignore();
    for (auto &x: s) {
        cin >> x;
    }
    cout << remove(s, 0, 1);
    return 0;
}