#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int inter;
    int police = 0;
    int crime = 0;
    for (int i = 0; i < n; i++) {
        cin >> inter;
        if (inter == -1 ) {
            police--;
            if (police < 0) {
                crime++;
                police = 0;
            }
        }
        else police += inter;
    }
    cout << crime;

}