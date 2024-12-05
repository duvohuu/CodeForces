#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);
    int a[n];
    int min = 9;
    int min_index = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", a + i);
        if (a[i] < min) {
            min = a[i];
            min_index = i;
        }
    }
    a[min_index]++;
    for (int i = 1 ; i < n; ++i) {
        a[i] *= a[i - 1];
    }
    printf("%d\n", a[n - 1]);

}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}