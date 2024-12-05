#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int matrix [5][5];
    int count1, count2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >>matrix[i][j];
        }
    }
    for (int k = 0; k < 5; k++) {
        for (int m = 0; m < 5; m++) {
            if (matrix[k][m] == 1) {
                cout << abs(k - 2) + abs (m - 2); 
            }
        }
    }
    return 0;
}