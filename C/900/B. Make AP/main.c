#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (c - b == b - a) {
            if (a <= b <= c || a >= b >= c ) {
                printf("YES\n");
                continue;
            }
        }
        if ((a + c) % 2 == 0) {
            int average = (a + c) / 2;
            if (c - average == average - a && average % b == 0) {
                printf("YES\n");
                continue;
            }
        }
        int targeta = 2 * b - c;
        int targetc = 2 * b - a;
        if (targetc - b == b - a && targetc % c == 0 && targetc > 0) {
            printf("YES\n");
            continue;
        }
        else if (c - b == b - targeta && targeta % a == 0 && targeta > 0) {
            printf("YES\n");
            continue;
        }

        printf("NO\n"); 
    }

    return 0;
}