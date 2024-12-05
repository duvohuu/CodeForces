#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, k, ans, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        ans = 1;
        for(int i = 1; i <= n; i++){
            scanf("%d", &x);
            if(x == ans) ans++;
        }
        printf("%d\n",((n-ans+k)/k));
    }
    return 0;
}