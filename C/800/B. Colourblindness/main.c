#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        int count = 0;
        scanf("%d", &n);
        char a[1000];
        char b[1000];
        scanf("%s", a);
        scanf("%s", b);
        for (int i = 0; i < n; i++) {
            if (a[i] == 'G') {
                if (b[i] != 'B' && b[i] != 'G') {
                    count = 1;
                    break;
                }
            }
            else if (a[i] == 'B') {
                if (b[i] != 'G' && b[i] != 'B') {
                    count = 1;
                    break;
                }
            }
            else {
                if (a[i] != b[i]) {
                    count = 1;
                    break;
                }
            }
        }
        if (count == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}