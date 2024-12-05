#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long min_minutes = (n + 1) / 2 * 5;
        cout << max(min_minutes, 15LL) << endl;
    }
    return 0;
}
