#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        result[i] = n - n/2 - 1;
    }
    for (int x: result) {
        cout << x << endl;
    }
}
