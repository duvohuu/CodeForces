#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int f = 0;
        for(int i = 0; i < 8; i++) {
            char s[9]; // Tăng kích thước mảng lên 9 để chứa chuỗi ký tự và kết thúc chuỗi '\0'
            scanf("%s", s);
            if (strcmp(s, "RRRRRRRR") == 0) f = 1;
        }
        if (f == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
