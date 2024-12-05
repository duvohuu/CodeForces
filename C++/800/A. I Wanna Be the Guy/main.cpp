#include <iostream>

using namespace std;

int main() {
    int n, p, q;
    cin >> n;
    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++) {
        cin >> x[i];
    }
    cin >> q ;
    int y[q];
    for (int j = 0; j < q; j++) {
        cin >> y[j];
    }
    int max = (p > q) ? p : q;
    int find = 1;
    for (int k = 0; k < max; k++) {
        if (x[k] == find || y[k] == find) {
            find++;
            k = -1;
        }
        if (find == n + 1) {
            cout << "I become the guy.";
            return 0;
        }
    }
    cout <<"Oh, my keyboard!";
    return 0;
}