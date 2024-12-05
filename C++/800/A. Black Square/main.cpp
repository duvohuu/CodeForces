#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int caloes = 0;
    int a[4];
    for (int &x: a) {
        cin >> x;
    }
    string s;
    cin >> s;
    for (int i =  0 ; i < s.length(); i++) {
        caloes += a[(s[i] - '0') - 1];
    }
    cout << caloes;
    return 0;
}