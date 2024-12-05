#include <iostream>

using namespace std;

int main() {
    int t; // Số lượng test case
    cin >> t;

    while (t--) {
        int x, y, n; // Các giá trị đầu vào
        cin >> x >> y >> n;

        // Tính số k cần tìm
        int k = (n - y) / x;
        int ans = k * x + y;

        cout << ans << endl;
    }

    return 0;
}
