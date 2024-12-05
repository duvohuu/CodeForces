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
#include <stdbool.h> 


void solve() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    int cnt = 0;
    for (int i = n - 2; i >= 0; i--)   {
        while (a[i] >= a[i + 1] && a[i] / 2 != a[i])  {
            a[i] /= 2;
            cnt++;
        } 
    }
    bool ans = 1;
    for(int i = 1; i < n; i++)
        if (a[i - 1] >= a[i])
        ans = 0;
    if (!ans)
        cnt = -1;
    printf("%d\n", cnt);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}