#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;
    int max = (Y > W) ? Y : W;
    switch (7 - max) {
        case 1:
            cout << "1/6";
            break;
        case 2:
            cout << "1/3";
            break;
        case 3:
            cout << "1/2";
            break;
        case 4:
            cout << "2/3";
            break;
        case 5: 
            cout << "5/6";
            break;
        case 6: 
            cout << "1/1";
            break;
    }
    return 0;
}