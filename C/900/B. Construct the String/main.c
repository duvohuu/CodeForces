#include <stdio.h>
#include <string.h>

int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
        int index = 0;
        for (int i = 0; i < n; i++) {
            printf("%c", alphabets[index]);
            index++;
            if (index % b == 0) {
                index = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}