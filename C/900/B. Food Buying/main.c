#include <stdio.h>

long long burles(long long s) {
    long long total = 0;
    while (s >= 10) {
        long long spend = (s / 10) * 10;
        total += spend;
        s = s - spend + (spend / 10);
    }
    total += s;
    return total;
}
int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        long long s;
        scanf("%lld", &s);
        printf("%lld\n", burles(s));
    }
    return 0;
}