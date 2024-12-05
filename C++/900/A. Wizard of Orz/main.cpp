#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int value = 9;
        for (int i = 0; i < n; i++) {
            cout << value;
            if (i < 1) {
                --value;
                if (value < 0) value = 9;
            }
            else if (i == 1) value = 9;
            else {
                ++value;
                if (value > 9) value = 0;
            }
        }
        cout << endl;
    }
    return 0;

}

