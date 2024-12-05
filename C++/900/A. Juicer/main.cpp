#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d, a, size = 0, time = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a <= b) {
            size += a;
        }
        if (size > d) {
            size = 0;
            time++;
        }
    }
    cout << time;
    return 0;
}