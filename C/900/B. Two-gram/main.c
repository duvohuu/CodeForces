#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int maxFreq = 0;
    char mostFrequent[3] = {0};

    for (int i = 0; i < n - 1; i++) {
        int Freq = 0;
        char current[3] = {s[i], s[i + 1], '\0'};
        for (int j = i; j < n - 1; j++) {
            char compare[3] = {s[j], s[j + 1], '\0'};
            if (strcmp(current, compare) == 0) Freq++;
        }
        if (Freq > maxFreq) {
            maxFreq = Freq;
            strcpy(mostFrequent, current);  
        }
    }

    printf("%s", mostFrequent);
    return 0;
}
