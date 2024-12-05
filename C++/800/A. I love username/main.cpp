#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    cin >> n;
    int best = n;
    int worst = n;
    int amazing = 0;
    while (t > 1) {
        cin >> n;
        if (n > best) {
            best = n;
            amazing++;
        }
        else if (n < worst) {
            worst = n;
            amazing++;
        }
        t--;
    }
    cout << amazing;
    return 0;
}