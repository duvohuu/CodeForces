#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main() {
    char s[100];
    int count = 0;
    cin >> s;
    for (int i = 0; i < strlen(s); i++){
        count += (isupper(s[i]) != 0) ? 1 : 0;
    } 
    if (count > strlen(s)/2) 
        cout << strupr(s);
    else 
        cout << strlwr(s);
    return 0;
}