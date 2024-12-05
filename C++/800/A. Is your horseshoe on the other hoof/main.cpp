#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int hoof[4];
    for(int i = 0; i < 4; i++) {
        cin >> hoof[i];
    }
    int count = 0;
    for (int j = 0; j < 4; j++) {
        int unique = 1;
        for (int k = j + 1; k < 4; k++) {
            if (hoof[j] == hoof[k]) {
                unique = 0; 
                break;
            }
        }
        count += unique;
    }
    int horseshoesNeeded = 4 - count;
    cout << horseshoesNeeded;
    return 0;
}