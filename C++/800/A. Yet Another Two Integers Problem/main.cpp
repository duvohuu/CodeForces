#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int moves(int a, int b) {
    int time = 0;
    int distance = (a - b > 0) ? a - b : b - a;
    while (distance > 0) {
        if (distance > 10) {
            time += distance / 10;
            distance -= time * 10;
        }
        else{
            time++;
            break;
        }
    }
    return time;


}

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << moves(a, b) << endl;
    }
    return 0;
}