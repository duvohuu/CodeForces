#include <stdio.h>
#include <string.h>

int main() {
    char s[2001];
    char result[2001];
    int n;
    scanf("%d", &n);
    scanf("%s", &s);
    int mid = (n % 2) ? n / 2 : n / 2 - 1;
    result[mid] = s[0];
    int i = 1, before = mid, after = mid;
    while (i < n) {
        if (!(i % 2) && (n % 2)) result[++after] = s[i]; 
        else if (!(i % 2) && (!(n % 2))) result[--before] = s[i]; 
        else if ((i % 2) && ( n % 2 )) result[--before] = s[i];
        else result[++after] = s[i];
        i++;
    }
    for (int j = 0; j < n; j++) {
        printf("%c", result[j]);
    }
    return 0;
}