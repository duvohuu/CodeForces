#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline (cin, s);
    int count = 0;
    vector <int> result(200, 0);
    for (int i = 1; i < s.size() - 1; i += 3) {
        if (result[s[i]] == 0) {
            count++;
            result[s[i]] = 1;
        }
    }
    cout << count;
}