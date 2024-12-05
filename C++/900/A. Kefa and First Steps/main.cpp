#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0, countmax = 0;
    cin >> n;
    int a, prev = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a >= prev) {
            count++;
            if (count > countmax) countmax = count;
        }
        else count = 1;
        prev = a;
    }
    cout << countmax;
    return 0;
}