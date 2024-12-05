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
#include <math.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long sum = n*(n + 1)/2;
    long long num_pow = log2(n);
    for (int i = num_pow; i >= 0; i--) {
        sum -= 2 * (long long)pow(2, i);
    }
    cout << sum << endl;

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}