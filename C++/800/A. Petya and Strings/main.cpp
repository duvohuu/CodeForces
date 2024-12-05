#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int compare (char *str1, char *str2) {
    int n = strlen(str1);
    int count = 0;
    char *str1change = strlwr(str1);
    char *str2change = strlwr(str2);
    for (int i = 0; i < n; i++) {
       if (str1change[i] > str2change[i]) return 1;
       else if (str1change[i] < str2change[i]) return -1;
    }
    return 0;
}

int main() {
    char str1[100];
    char str2[100];
    cin >> str1;
    cin >> str2;
    cout << compare(str1, str2);
    return 0;
}