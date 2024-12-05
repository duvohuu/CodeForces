#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(long long n) {
    int time = n / 2020;
    int time2021 = n % 2020;

    if (time >= time2021) return true;
    return false;

}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (check(n)) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}