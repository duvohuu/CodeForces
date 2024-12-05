#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        int len = strlen(s);
        int count_ones = 0;

        for (int i = 0; i < len; i++) {
            if (s[i] == '1') {
                count_ones++;
            }
        }
        int count_zeros = len - count_ones;

        int turnA = (count_zeros > count_ones) ? count_ones : count_zeros;
        if (turnA % 2 == 0) printf("NET\n");
        else printf("DA\n");
    }

    return 0;
}
