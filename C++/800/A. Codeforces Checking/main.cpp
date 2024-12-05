#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    char example [] = {'c', 'd', 'o', 'e', 'r', 'f', 's'};
    char c;
    while (t--) {
        int check = 0;
        cin >> c;
        for (int i = 0; i < 7; i++) {
            if (c == example[i]) {
                check = 1;
                break;
            }
        }

        cout << ((check == 1) ? "YES" : "NO" )<< endl;

    }
    return 0;
}