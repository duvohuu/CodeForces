#include <iostream>
#include <cstring>

using namespace std;

void recognize(char *mess, int *count) {
    for (int i = 0; i < strlen(mess) - 1; i++) {
        char temp = mess[i];
        for (int j = i+1; j < strlen(mess); j++) {
            if (mess[j] == temp) break;
            if (j == strlen(mess) - 1 ) {
                (*count)++;
            }
        }
    } 
}

int main () {
    char mess[100];
    int count = 1; // Chữ cuối luôn nhận
    cin >> mess;
    recognize(mess, &count);
    if (count % 2 == 0) printf("CHAT WITH HER!");
    else cout << "IGNORE HIM!";
    return 0;
}