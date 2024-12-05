#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    scanf("%d", &n);
    int drink[n];
    double cocktail;
    for (int i = 0; i < n; i++) {
        scanf("%d", &drink[i]);
        cocktail += drink[i];
    }
    char result[13];
    sprintf(result, "%.12f", cocktail / n);
    printf("%s", result);
    return 0;
}