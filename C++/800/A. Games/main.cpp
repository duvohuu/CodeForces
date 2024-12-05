#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int games = 0;
    vector <int> home(n);
    vector <int> guess(n);

    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guess[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            if (guess[j] == home[i]) games++;
        }
    }

    cout << games;
}