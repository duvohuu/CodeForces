#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int responses[n];
    for (int i = 0; i < n; i++) {
        cin >> responses[i];
        if (responses[i] == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}