#include <stdio.h>
#include <stdlib.h>

void solve() {
    long long n, x, sum = 0;
    scanf ("%lld", &n);
    long long cnt = 0;
    for (long long i = 0; i < n; ++i) {
        scanf("%lld", &x);
        if (i < n - 1) {
            if (x == 0 && sum > 0) {
                sum++; cnt++;
            }
            else sum += x;
        }
    }
    if (cnt != n - 1) printf("%lld\n", sum);
    else printf("%lld\n", 0);

}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
