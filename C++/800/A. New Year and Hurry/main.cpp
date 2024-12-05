#include <iostream>

using namespace std;

int main()  {
    int n, k;
    cin >> n >> k;
    int minproblems = 240 - k;
    int i;
    for (i = 1; i <= n; i++) {
        minproblems -= 5 *i;
        if (minproblems < 0) {
            break;
        }
    }
    cout << i - 1;
    return 0;
}