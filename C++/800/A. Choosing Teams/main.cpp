#include <iostream>

using namespace std;

int main() {
    int n, k, member = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] + k <= 5) member++;
    }
    cout << member/3;
    return 0;
}