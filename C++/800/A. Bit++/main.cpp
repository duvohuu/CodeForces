#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    char str[n][3];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    } 
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < 3; k++) {
            if (str[j][k] == '+') {
                count++;
                break;
            }
            else if (str[j][k] == '-') {
                count--;
                break;
            }
        }
    }
    cout << count;
    return 0;
}