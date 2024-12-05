#include <iostream>

using namespace std;

int main() {
    long long nums;
    int count = 0;
    cin >> nums;
    while (nums != 0) {
        if (nums % 10 == 4 || nums % 10 == 7) {
           count++;
        }
        nums /= 10;
    }
    if (count == 4 || count == 7) cout << "YES";
    else cout << "NO";
    return 0;
}