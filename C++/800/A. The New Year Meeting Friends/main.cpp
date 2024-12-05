#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // Tìm trung điểm (median) của ba số x1, x2, x3
    int x = max(min(x1, x2), min(max(x1, x2), x3));

    // Tính tổng quãng đường di chuyển của mỗi người bạn
    int total_distance = abs(x - x1) + abs(x - x2) + abs(x - x3);

    cout << total_distance << endl;
    return 0;
}
