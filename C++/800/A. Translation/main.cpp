#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s1[101];
    char s2[101];
    cin >> s1 >> s2;
    int count = 0;
    for (int i =  0; i < strlen(s1); i++) {
        if (s1[i] != s2[strlen(s1) - i - 1]) {
            cout <<"NO";
            return 0;
        }
    } 
    cout <<"YES" ;
    return 0;
 
}