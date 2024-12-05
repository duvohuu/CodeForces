#include <iostream>

using namespace std;

int main() {
    int target;
    cin >> target;
    int count = 0;
    for (int i = 5; i > 0; i--) {
        if (target >= i) {
            count += target / i;
            target -= count * i;
        }
        if (target == 0) break;
    }
    cout << count;
    return 0;

} 