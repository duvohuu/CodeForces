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

#include <stdio.h>
#include <string.h>

void solve() {
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int ans = 2;
    int same = 2;
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == s[i - 1]) ++same;
        else same = 2;
        if (same > ans) ans = same;
    }
    
    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;

}