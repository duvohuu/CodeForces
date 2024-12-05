#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef long long ll;
ll a[100000];
ll b[100000];
int comparator1(const void *a, const void *b) {
    return (*(ll*)a - *(ll*)b);  
}

int comparator2(const void *x, const void *y) {
        ll index_x = *(const ll *)x;
        ll index_y = *(const ll *)y;
        return (a[index_x] - a[index_y]);
    }

void solve(int n, int k, ll a[], ll b[]) {
    ll temp[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", a + i);
        temp[i] = i;
    }
    for (int i = 0; i < n; i++) {
        scanf("%lld", b + i); 
    }
    qsort(b, n, sizeof(ll), comparator1);  
    qsort(temp, n, sizeof(ll), comparator2);  
    int ans[n];
    for (int i = 0; i < n; i++){
        ans[temp[i]] = b[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n, k;
        scanf("%lld%lld", &n, &k);
        solve(n, k, a, b);
    }
    return 0;
}