#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int result[t];
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int candy[n];
        int totalweight = 0;
        int weight2 = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &candy[j]);
            if (candy[j] == 2) weight2++;
            totalweight += candy[j];
        }

        if (totalweight % 2 != 0) {
            result[i] = 0;
            continue;
        }

        else if (weight2 == n && weight2 % 2 != 0) {
            result[i] = 0;
            continue;
        }

        result[i] = 1;
        
    }
    for (int i = 0; i < t; i++) {
        if (result[i] == 0) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}