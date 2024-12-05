#include <stdio.h> 

void rearrange(int t) {
    if (t == 0) return; 
    int find = 0;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                find = 1;
                break;
            }
        }
        if (find == 1) {
            printf("NO\n"); 
            break;
        }
    }
    if (!find)
        printf("YES\n");
        
    rearrange(--t);
}

int main() {
    int t;
    scanf("%d", &t);
    rearrange(t);
    return 0;
}