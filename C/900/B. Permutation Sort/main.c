#include <stdio.h>
#include <limits.h>

void solve(int a[], int n) {
    int index_max = 0;
    int index_min = 0;
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++) {
            scanf("%d", a + i);
            if (a[i] > max) {
                max = a[i];
                index_max = i;
            }
            if (a[i] < min) {
                min = a[i];
                index_min = i;
            }
        }
        if (index_min == 0 && index_max == n - 1) {
            int arrange = 0;
            for (int i = 1; i < n; i++) {
                if (a[i] < a[i - 1]) {
                    arrange = 1;
                    break;
                }
            }
            printf("%d\n", arrange);
            return;
        }
        else if (index_min == n - 1 && index_max == 0) printf("3\n");
        else if (index_min == 0 || index_max == n - 1) printf("1\n");
        else printf("2\n");
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n];
        scanf("%d", a);
        solve(a, n);
    }
    return 0;            
}