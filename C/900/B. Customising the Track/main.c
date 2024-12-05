#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

void solve()  {
    ll n;
    scanf("%lld", &n);
    ll inconvenience = 0, sum = 0, a;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a);
        sum += a;
    }
    if (sum == 0) {
        ll tracks_zero = n - sum; 
        inconvenience = tracks_zero*sum;
    }
    else {
        ll tracks_zero = sum % n; 
        inconvenience = tracks_zero*(n - tracks_zero);
    }
    printf("%lld\n", inconvenience);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0; 
}