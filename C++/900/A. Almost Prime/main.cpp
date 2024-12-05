#include <bits/stdc++.h>
using namespace std;
 
int Divno(long long n) {
    long long cnt = 0;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            cnt++;
        }
    }
    if (n > 1) cnt++;
    return cnt;
}
 
int main() {
    long long n;
    cin >> n;
    long long cnt = 0;
    for (long long i = 1; i <= n; i++){
        if (Divno(i) == 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
 