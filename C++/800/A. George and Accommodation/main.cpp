#include <iostream> 

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int freeplace[n][2];
    for (int i = 0; i < n; i++) {
        cin >> freeplace[i][0] >> freeplace[i][1];
        if (freeplace[i][1] - freeplace[i][0] >= 2) count++;
    }
    cout << count;
    return 0;
}