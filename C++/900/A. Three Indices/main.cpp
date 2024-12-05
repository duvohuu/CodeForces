#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int index = 0;
        auto solve = [&index](int n) mutable {
            int max = 0, p, check = 0;
            for (int i = 0; i < n; ++i) {
                cin >> p;
                if (p > max) {
                    max = p;
                    index = i + 1;
                    ++check;
                }
                else if (p < max && check > 1) {
                    return index;
                }
                else {
                    max = p;
                    index = i + 1;
                }
            }
            return n;
        };
        int result = solve(n);
        if (result != 1 && result != n) {
            cout << "YES" << endl << result - 1 << " " << result << " " << result + 1 << endl;
        } else {
            cout << "NO" << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return 0;
}