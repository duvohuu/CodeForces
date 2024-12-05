#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    char stones[n];
    cin >> stones;
    for (int i = 0; i < n - 1; i++) {
        if (stones[i] == stones[i+1]) 
            count++;
    }
    cout << count;
    return 0;
}