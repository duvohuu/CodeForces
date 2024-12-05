#include <stdio.h>
#include <stdlib.h>

void solve(int n) {
    int max_a = 0;
    int b_elements;
    for (int i = 0; i < n; i++) {
        scanf("%d", &b_elements);
        int a_elements = b_elements + max_a;
        printf("%d ", a_elements);
        if (a_elements > max_a) max_a = a_elements;
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}