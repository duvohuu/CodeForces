#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve() {
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int i;
    char stack;
    for (i = 0; i < n; ++i) {
        stack = s[i];
        if (stack == '?') continue;
        for (int j = i + 1; j < n; ++j) {
            if (s[j] == '?') {
                s[j] = (stack == 'B') ? 'R' : 'B';
            }
            stack = s[j]; 
        }
        stack = s[i];
        for (int j = i - 1; j >= 0; --j) {
            if (s[j] == '?') {
                s[j] = (stack == 'B') ? 'R' : 'B';
            }
            stack = s[j];
        }
        break;
    }
    if (stack == '?') {
        for (int j = 0; j < n; ++j) {
            (j % 2) ? printf("R"): printf("B");
        }
        printf("\n");
        return;
    }
    printf("%s\n", s);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}