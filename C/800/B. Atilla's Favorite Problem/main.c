#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf ("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int size = s[0];
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] > size) size = s[i];
        }
        printf("%d\n", size - 96);
    }
    return 0;
}