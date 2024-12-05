#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    cout << "0 ";
    int a1 = 0, a2 = 1, a = 1;
    if (n == 0) {
        cout << "0 0" << endl;
        return;
    }
    while (a < n) {
        a1 = a2;
        a2 = a;
        a = a1 + a2;
    }
    cout << a1 << " " << a2 ;
    

}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}