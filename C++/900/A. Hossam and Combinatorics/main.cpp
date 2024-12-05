#include <bits/stdc++.h>
 
using namespace std;
 
long long factorial(int n) {
 
    long long result = 1;
    for (long long i = n; i > n - 2; --i) {
        result *= i;
    }
 
    return result;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x: v) {
        cin >> x;
    }
    sort(v.begin(), v.end());
    long long i = 1, j = n - 2;
    if (i == j && v[i] == v[j]) {
        cout << 6 << endl;
        return;
    }
    while (i <= j) {
        if (v[i] == v[0]) {
            ++i;
        }
        if (v[j] == v[n - 1]) {
            --j;
        }
        if (v[i] != v[0] && v[j] != v[n - 1]) break;
    }
    
    long long answer = (i >= j && v[i + 1] == v[j]) ? factorial(n) : 2*i*(n - 1 - j);
    cout << answer << endl;
}
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}