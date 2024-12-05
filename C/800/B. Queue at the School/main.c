#include <stdio.h>

void swap (char *a, char *b) {
    char temp = *a;
    *a = *b; 
    *b = temp;
}

void change (int n, int t, char *s) {
    for (int i = 0; i < t; i++) {
        int j = 0; 
        while (j < n) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                swap(&s[j], &s[j+1]);
                j+=2;
            }
            else j++;
        }
    }
}

int main() {
    int n, t;
    scanf("%d%d", &n, &t);
    char s[n];
    scanf("%s", s);
    change(n, t, s);
    printf("%s", s);
    return 0;
}