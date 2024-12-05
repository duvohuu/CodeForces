#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n > 45) {
            printf("-1\n");
            continue;
        }

        int index = 0, temp = n, num = 9;
        int *a = (int*)malloc(9 * sizeof(int));
        while (temp > 0) {
            int digit = (temp > num) ? num : temp;
            a[index] = digit;
            temp -= digit;
            index++;
            num--;
        }

        for (int i = index - 1; i >= 0 ; i--) {
            printf("%d", a[i]);
        }
        printf("\n");
        free(a);
    }
    return 0;
}