#include <iostream>

using namespace std;
 
int beautiful(int y) {
    int result, i = 1;
    while (1) {
        int count = 0;
        result = y + i;
        int temp = result;
        int array[4];
        array[0] = temp % 10;
        temp /= 10;
        array[1] = temp % 10 ;
        temp /= 10;
        array[2] = temp % 10;
        temp /= 10;
        array[3] = temp % 10;
        for (int i = 0; i < 3; i++) {
            int key = array[i];
            for (int j = i + 1; j < 4; j++) {
                if (key != array[j]) count++;
            }
            if (count == 6) return result;
        }
 
        i++;
    }
    return 0;
}

int main() {
    int y;
    cin >> y;
    cout << beautiful(y);
    return 0;
}