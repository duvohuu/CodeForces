#include <iostream>

using namespace std;

int width(int n, int h, int array[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
       count += (array[i] <= h) ? 1 : 2; 
    } 
    return count;
}

int main() {
    int n, h;
    cin >> n >> h;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << width(n, h, array);
    return 0;
}