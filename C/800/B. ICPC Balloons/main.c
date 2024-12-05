#include <stdio.h>

int counts(char *s, int length) {
    int ballons = 0;
    int container[100] = {0};
    for (int i = 0; i < length; i++) {
        int a = s[i];
        if (container[a] == 0) {
            container[a] = 1;
            ballons += 2;
        }
        else ballons++;
    }
    return ballons;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        printf("%d\n", counts(s, n));
    }
    return 0;
}