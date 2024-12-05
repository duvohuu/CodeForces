#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a[n];
    long long min_times = 0;
    long long negative = 0;
    long long max_negative = INT_MIN;
    long long min_positive = INT_MAX;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);   
        if (a[i] < 0) {
            negative++;
            if (max_negative < a[i]) max_negative = a[i];
        }
        else {
            if (min_positive > a[i]) min_positive = a[i];
        }
    }

    long long transfer;
    if (negative < n) transfer = (1 - max_negative) < (1 + min_positive) ? max_negative : min_positive;
    else transfer = max_negative;

    for (int i = 0; i < n; i++) {
        if (negative % 2 != 0 && a[i] == transfer) {
            min_times += (transfer < 0) ? (1 - max_negative) : (1 + min_positive);
            negative--;
        }

        else min_times += (a[i] < 0) ? (abs(a[i] + 1)) : (abs(a[i] - 1));
    }
    
    printf("%lld", min_times);
    return 0;
}