#include <iostream>

using namespace std;

int years(int Limark, int Bob) {
    int i = 1;
    while (i > 0) {
        Limark *= 3;
        Bob *= 2;
        if (Limark > Bob)
            return i;
        i++;
    }
    return 0;
} 

int main() {
    int Limark, Bob;
    cin >> Limark >> Bob;
    cout << years(Limark, Bob);
    return 0;
}