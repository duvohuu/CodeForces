#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> round(int n) {
    vector<int> num;
    int i = 0;
    do {
        if ((n % 10) * pow(10, i)) {
        num.push_back((n % 10) * pow(10, i));
        }
        n /= 10;
        i++;
    }
    while (n > 0);
    
    return num;
}

int main() {
    int t, n;
    cin >> t;
    vector<vector<int>> result(t);

    for (int i = 0; i < t; i++) {
        cin >> n;
        result[i]= round(n);
    }

    for (const auto &row: result) {
        cout << row.size() << endl;
        for (const auto &element: row) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}