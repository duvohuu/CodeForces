#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>>a(3, vector<int>(3));
    vector<vector<int>>b(3, vector<int>(3, 1));
    for (auto &row: a) {
        for (int &y: row) {
            cin >> y;
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > 0 && a[i][j] % 2 == 1) {
                b[i][j] = abs(b[i][j] - 1);
                if (i > 0) b[i - 1][j] = abs(b[i - 1][j] - 1);
                if (j > 0) b[i][j - 1] = abs(b[i][j - 1] - 1);
                if (i < 2) b[i + 1][j] = abs(b[i + 1][j] - 1);
                if (j < 2) b[i][j + 1] = abs(b[i][j + 1] - 1);
            }
        }
    }
    
    for (auto row: b) {
        for (auto z: row) {
            cout << z;
        }
        cout << endl;
    }
    return  0;
}