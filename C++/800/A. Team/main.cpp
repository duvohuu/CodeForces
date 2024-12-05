#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int array[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array[i][j];
        }
    }
   
    int count1 = 0;
    for (int k = 0; k < n; k++) {
        int count2 = 0;
        for (int m = 0; m < 3; m++) {
            if (array[k][m] == 1) {
                count2++;
            }
        }
        if (count2 >= 2) {
            count1++;
        }
    }
    cout << count1;
    return 0;
    
}