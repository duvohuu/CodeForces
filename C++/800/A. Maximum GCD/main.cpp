#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // Đọc số lượng test cases

    while (t--) {
        int n;
        cin >> n; // Đọc giá trị n

        // Vì ta cần tìm ước chung lớn nhất của cặp số (a, b) với a < b và 1 ≤ a, b ≤ n
        // Ta chỉ cần tìm ước chung lớn nhất của (n/2) và n
        // Và (n/2) và n không chia hết cho bất kỳ số nào khác ngoài 1, nên ước chung lớn nhất là n /2

        cout << n / 2 << endl;
    }

    return 0;
}
