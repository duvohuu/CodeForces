#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    char s[19];
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        int Min_step = strlen(s);
        for (int i = strlen(s) - 1; i > 0; i--) {
            for (int j =  i - 1; j >= 0; j-- ) {
                if (((s[i] - '0') + 10 * (s[j] - '0')) % 25 == 0 && (strlen(s) - j - 2 < Min_step)) {
                    Min_step = strlen(s) - j - 2;
                    break;
                }
            }
            if (Min_step == 0) break;
        }
        printf("%d ", Min_step);

    }
    return 0;
}