#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int bill = 0;
    int array[5] = {100, 20, 10, 5, 1};
    int i = 0, count;

    while (n > 0) {
        int key = array[i];
        if (n / key > 0) {
            count = n/key;
            n -= count * key;
            bill += count;
        }
        i++;
    }

    cout << bill;
    return 0;
}