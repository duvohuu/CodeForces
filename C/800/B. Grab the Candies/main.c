#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);
    int x;
    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (x % 2) {
           odd += x;
        }
        else even += x;
    }
    if (even > odd) printf("YES\n");
    else printf("NO\n");
}

int main() {
    system("cls");
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}