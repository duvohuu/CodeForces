#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int floor = (s[0] - '0');
        int count;
        switch (s.length()) {
            case 1: 
                count = 1;
                break;
            case 2:
                count = 3;
                break;
            case 3:
                count = 6;
                break;
            case 4:
                count = 10;
                break;
            default:
                break;
        }
       cout << (floor - 1) * 10 + count << endl;
    }
    return 0;
}