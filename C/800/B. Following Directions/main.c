#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        int count = 0;
        scanf("%d", &n);
        int a[] = {0, 0};
        char s[n]; 
        scanf("%s", s);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') a[0]++;
            else if (s[i] == 'D') a[0]--;
            else if (s[i] == 'R') a[1]++;
            else a[1]--;

            if (a[0] == 1 & a[1] == 1) {
                count = 1;
                break;
            }
        }
        if (count == 1) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}