#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char feel[2000] = "I hate ";
    for (int i = 1; i < n; i++) {
        if(i % 2 == 0) strcat(feel, "that I hate ");
        else strcat(feel, "that I love ");
    }
    strcat(feel, "it ");
    cout << feel;
}