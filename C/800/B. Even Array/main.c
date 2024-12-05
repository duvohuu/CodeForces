#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array[n][1000]; 
    double result[n];
    int count1, count2;
    for (int i = 0; i < n; i++) {
        count1 = 0;
        count2 = 0;
        int a;
        scanf("%d", &a);

        for (int j = 0; j < a; j++) {
            scanf("%d", &array[i][j]);

            if (j % 2 == 0 && array[i][j] % 2 != 0) 
                count1++;

            else if (j % 2 != 0 && array[i][j] % 2 == 0)
                count2++;
            
        }
        result[i] = (count1 == count2) ? count1 : -1;
    }
    for (int k = 0; k < n; k++) {
        printf("%d\n", (int)result[k]);
    }
    return 0;

}