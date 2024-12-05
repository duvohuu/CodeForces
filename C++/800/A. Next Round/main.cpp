#include <iostream>
#include <string.h>

using namespace std;
 
int main() {
    char s[100];
    int n, k;
    int count = 0;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++) {
        if (array[j] >= array[k - 1] && array[j] > 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}