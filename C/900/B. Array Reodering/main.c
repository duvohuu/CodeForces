#include <stdio.h>

int gcd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int  i = 0; i < n; i++) {
            scanf("%d", a + i);
        }
        int goods = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], 2 * a[j]) > 1 || gcd(2 * a[i], a[j]) > 1) {
                    goods++;
                }
            }
        }

        printf("%d\n", goods);
    }

    return 0;
}