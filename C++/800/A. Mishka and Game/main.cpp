#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int Mishka = 0;
    int Chris = 0;
    cin >> t;
    while (t--) {
        int m, c;
        cin >> m >> c;
        if (m > c) Mishka++;
        else if (m < c) Chris++;
    }
    if (Mishka > Chris) cout << "Mishka";
    else if (Mishka < Chris) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}