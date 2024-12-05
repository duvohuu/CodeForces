/**
 *                        .'  '.
 *                   _.-'/  |  \
 *       ,       _.-"  ,|  /    `-.
 *      |\    .-"       `--""-.__.'========================-,
 *      \ '-'`        .___.--._)============================|
 *       \            .'      |     Hey there ♡             |
 *        |     /,_.-'        |                             |
 *      _/   _.'(             |    Autor: Vo Huu Du  |
 *      /  ,-' \  \           |    Age: 20                  |
 *      \  \    `-'           |                             |
 *       `-'                  '-----------------------------'
 *
 *      
**/
#include <stdio.h>
#include <stdlib.h>

int comparator(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    long long pr[n+1];
    pr[0] = 0;
    for (int i = 1; i <= n; i++) {
    scanf("%lld", pr + i);
    }
    qsort(pr, n + 1, sizeof(long long), comparator);
    for (int i = 1; i <= n; i++)    {
        pr[i] += pr[i - 1];
    }
  
    while (q--) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%lld\n", pr[n + y - x] - pr[n - x]);
    }
    return 0;
}