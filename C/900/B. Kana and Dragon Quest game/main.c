#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {   
        int x, n, m;
        scanf("%d%d%d", &x, &n, &m);
        while (m > 0) {
            if (x <= 0) break;
            if (x / 2 - 10 >= 0 && n > 0) {
                x = x / 2 + 10;
                n--;

            }
            else {
                x -= 10;
                m--;
            }
        }
        if (x <= 0 && n >= 0 && m >= 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}