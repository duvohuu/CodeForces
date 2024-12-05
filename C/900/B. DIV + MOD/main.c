#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long l, r, a;
        scanf("%lld %lld %lld", &l, &r, &a);
        if (l / a != (r + 1) / a) {
            r = 1ll * a *((r + 1) / a) - 1;
        }
        printf("%lld\n", r / a + r % a);
    }   
    return 0;
}
