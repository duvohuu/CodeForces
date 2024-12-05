#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

char *cap(char *upper) {
    if (isupper(upper[0]) != 0) return upper;
    upper[0] = toupper(upper[0]);
    return upper;
}

int main() {
    char str[1000];
    cin >> str;
    cap(str);
    cout << str;
    return 0;
}