#include <stdio.h>
#include <stdlib.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    if (n == 2) {
        printf("YES\n");
        printf("1 1\n");
    }
    else if (n == 3) printf("NO\n");
    else {
        printf("YES\n");
        if (!(n % 2)) {
            for (int i = 0; i < n; ++i) {
                if (!(i % 2)) printf("1 ");
                else printf("-1 ");
            }
            printf("\n");
        }
        else {
            for (int i = 0; i < n; ++i) {
                if (!(i % 2)) printf("%d ", n/2 - 1);
                else printf("%d ", -(n/2));
            }
            printf("\n");
        }
    }
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}