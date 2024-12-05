#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int same = 1;
        int max_index = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (i > 0 && a[i] != a[i - 1]) same = 0;
        }
        if (same) {
            printf("-1\n");
            continue;
        }
        
        int max = a[0];
        int i = 1;
        while (i < n) {
            if (a[i] >= max && (a[i + 1] < a[i] || a[i - 1] < a[i])) {
                max = a[i];
                max_index = i;
            }
            i++;
        }

        printf("%d\n", max_index + 1);
    }

    return 0;

}