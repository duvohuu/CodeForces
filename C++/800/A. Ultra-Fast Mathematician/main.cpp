#include <iostream>
#include <string.h>

using namespace std;
 
int main() {
    char n1[101], n2[101];
    cin >> n1 >> n2;
 
    int len = strlen(n1);
    char s[len]; 
 
    for (int i = 0; i < len; i++) {
        if (n1[i] == n2[i]) {
            s[i] = '0';
        } else {
            s[i] = '1';
        }
    }
    s[len] = '\0';
    cout << s;
    return 0;
}