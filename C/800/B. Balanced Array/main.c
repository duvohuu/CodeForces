#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); 
    }

    for (int j = 0; j < n; j++) {
        if (array[j] % 4 != 0 || array[j] == 2)
        printf("NO\n");

        else {
            printf("YES\n");
            int count1 = 0;
            int n1 = 2;
            for (int k = 0; k < array[j] / 2; k++) {
                printf("%d ", n1);
                count1 += n1;
                n1 += 2;
            }

            int count2 = 0;
            int n2 = 1;
            for (int k = array[j] /2 ; k < array[j] -  1; k++) {
                printf("%d ", n2);
                count2 += n2;
                n2 += 2;
            }
            printf("%d\n", count1 - count2);

        }
    }

    return 0;
}