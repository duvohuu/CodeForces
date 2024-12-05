/**
 *                        .'  '.
 *                   _.-'/  |  \
 *       ,       _.-"  ,|  /    `-.
 *      |\    .-"       `--""-.__.'========================-,
 *      \ '-'`        .___.--._)============================|
 *       \            .'      |     Hey there ♡             |
 *        |     /,_.-'        |                             |
 *      _/   _.'(             |    Autor: Vo Huu Du         |
 *      /  ,-' \  \           |    University: HCMUT        |
 *      \  \    `-'           |    Age: 20                  |
 *       `-'                  '-----------------------------'
 *
 *      
**/

#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    int odd = 0;
    int even = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2) ++odd;
        else ++even;
    }
    if (even == 0 || odd == 0) {
        cout << 0;
        return;
    }
    cout << ((odd > even) ? even : odd);
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}