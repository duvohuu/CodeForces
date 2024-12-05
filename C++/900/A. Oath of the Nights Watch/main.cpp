#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    cin >> a[0];
    long long min = a[0];
    long long max = a[0];
    int nums = 0;
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > min && a[i] < max) ++nums;
    }
    cout << nums;
    
    return 0;
}