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

/* INSTRUCTION
   Xo EVEN:
   n :      0  1  2  3  4  5  6  7  8  9 ...
   sum :    0 -1  1  4  0 -5  1  8  0 -9 ...
    - n odd:  + n/2 odd:  sum = n + 1
              + n/2 even: sum = -n
    - n even: + n/2 odd:  sum = 1
              + n/2 even: sum = 0

   Xo ODD:
   n :      0  1  2  3  4  5  6  7  8  9 ...
   sum :    0  1 -1 -4  0  5 -1 -8  0  9 ...
    - n odd:  + n/2 odd:  sum = -(n + 1)
              + n/2 even: sum = n
    - n even: + n/2 odd:  sum = -1
              + n/2 even: sum = 0 
*/

#include <stdio.h>
#include <math.h>
 
void solve() {
    long long x, n;
    scanf("%lld%lld", &x, &n);
    if (!(x % 2)) {
        if (n % 2) ((n/2) % 2) ?(printf("%lld\n", x + n + 1)) : printf("%lld\n", x - n);
        else ((n/2) % 2) ? (printf("%lld\n", x + 1)) : (printf("%lld\n", x));
    }
    else {
        if (n % 2) ((n/2) % 2) ? (printf("%lld\n", x - (n + 1))) : printf("%lld\n", x + n);
        else ((n/2) % 2) ? (printf("%lld\n", x - 1)) : (printf("%lld\n", x));
    }
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}