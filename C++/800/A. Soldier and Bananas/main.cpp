#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int borrow = ((k*w*(w+1)/2) > n) ? ((k*w*(w+1)/2) - n) : 0;
    cout << borrow;
    return 0;
}