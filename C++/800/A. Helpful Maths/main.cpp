#include <iostream>
#include <string.h>

using namespace std;

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char num[100];
    cin >> num;
    for (int i = 0; i < strlen(num); i+=2) {
        char min = i;
        for (int j = i+2; j < strlen(num); j+=2) {
            if (num[j] < num[min]) {
              min = j;
            }
        }
        swap(&num[min], &num[i]);
    }
    cout << num;
    return 0;
}