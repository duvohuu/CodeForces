#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve() {
    long long n, k, x;
    scanf("%lld%lld%lld", &n, &k, &x);
    long long max_sum = n*k + (-1)*k*(k-1)/2;
    long long min_sum = 1*k + k*(k - 1)/2;
    if (max_sum < x || min_sum > x) printf("NO\n");
    else printf("YES\n");
}

int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}