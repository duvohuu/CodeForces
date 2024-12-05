#include <iostream>

using namespace std;

int main() {
    int n, count = 1;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (i > 0) {
            if (array[i] != array[i - 1]) count++;
        }
    }
    cout << count;
}