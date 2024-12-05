#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int length = 2 * n;
        int a[2*n];
        for (int i = 0; i < length; i++) {
            scanf("%d", a + i);
        }

        for (int i = 0; i < length; i++) {
            int check = 0;
            for (int j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    check = 1;
                    break;
                }
            }
            if (check) continue;
            else {
                printf("%d ", a[i]);
                --n;
            }
            if (n == 0) break;
            
        } 
        printf("\n");
        
    }
    return 0;

}