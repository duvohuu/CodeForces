#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int t, n, k;
    scanf("%d", &t);
    int *result = (int*)malloc(t*sizeof(int));
    memset(result, 0, t*sizeof(int));

    for (int x = 0; x < t; x++) {
        scanf("%d%d", &n, &k);
        int arraya[n], arrayb[n];
        for (int y = 0; y < n; y++) {
            scanf("%d", &arraya[y]);
        }
        for (int z = 0; z < n; z++) {
            scanf("%d", &arrayb[z]);
        }

        for (int a = 0; a < k; a++) {
            int min = arraya[0];
            int max = arrayb[0];
            int countmin = 0;
            int countmax = 0;
            for (int b = 0; b < n; b++) {
                if (arraya[b] < min) { 
                    min = arraya[b];
                    countmin = b;
                }
                if (arrayb[b] > max) {
                    max = arrayb[b];
                    countmax = b;
                }
            }

            if (max > min)
                swap(&arraya[countmin], &arrayb[countmax]);
            }
            for (int c = 0; c < n; c++) {
                result[x] += arraya[c];        
        }
    }

    for (int d = 0; d < t; d++) {
        printf("%d\n", result[d]);
    }

    return 0;
}