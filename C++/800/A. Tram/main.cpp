#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int stop[n][2];
    for (int i = 0; i < n; i++) {
        cin >> stop[i][0] >> stop[i][1];
    }
    int capacity = stop[0][1];
    int key = capacity;
    for (int j = 1; j < n; j++) {
       capacity += stop[j][1] - stop[j][0];
       if (capacity > key) key = capacity;
    }
    cout << key;
    return 0;
}