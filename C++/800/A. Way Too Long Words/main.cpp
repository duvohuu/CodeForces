#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char str[n][100];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int k = 1; k < strlen(str[j]) - 1; k++) {
            if (str[j][k] != '\0') {
                count++;
            }
            if(count == 98) {
                break;
            }
        }
        if (count > 8) {
            cout << str[j][0] << count << str[j][count + 1] << endl;
        }
        else {
            cout << str[j] << endl;
        }
    }
    return 0;
}