#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int recieve[n];
    int gave[n];
    for (int i = 0; i < n; i++) {
        cin >> recieve[i];
    }
    for (int j = 0; j < n; j++) {
        int img = recieve[j];
        gave[img - 1] = j + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << gave[i] << " ";
    }
    return 0;
}