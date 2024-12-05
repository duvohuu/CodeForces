#include <stdio.h>
#include <string.h>

int main() {
    char ternary[1000];
    char num[1000] = "";
    scanf("%s", &ternary);
    int i = 0;

    if (ternary[0] == '.') {
            strcat(num, "0");
            i++;
    }
    while (i < strlen(ternary)) {
        if (ternary[i] == '.') {
            strcat(num, "0");
            i++;
            continue;
        }

        else if (ternary[i] == '-' && ternary[i + 1] == '.') {
            strcat(num, "1");
            i += 2;
            continue;
        }

        else if (ternary[i] == '-' && ternary[i + 1] == '-') {
            strcat(num, "2");
            i += 2;
            continue;
        }
    }
    printf("%s", num);

    return 0;
}