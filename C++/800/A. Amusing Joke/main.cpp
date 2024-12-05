#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string guess;
    string residence;
    string pile;
    cin >> guess;
    cin >> residence;
    cin >> pile;
    map<char, int> before;

    for (auto x: guess) {
        before[x]++;
    }
    for (auto y: residence) {
        before[y]++;
    }

    map<char, int> after;
    for (auto z: pile) {
        after[z]++;
    }
    
    if (before == after) {
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}