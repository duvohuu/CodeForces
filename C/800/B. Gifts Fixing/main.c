#include <stdio.h>

long long move (int candies[], int oranges[], int n) {
    long long moves = 0;
    for (int j = 0; j < n; j++) {
        scanf("%d", &candies[j]);
    }
    for (int j = 0; j < n; j++) {
        scanf("%d", &oranges[j]);
    }

    int targetcandy = candies[0];
    int targetorange = oranges[0];
    for (int l = 1; l < n; l++) {
        if (candies[l] < targetcandy) targetcandy = candies[l];
        if (oranges[l] < targetorange) targetorange = oranges[l];
    }
    for (int k = 0; k < n; k++) {
        int movescandies = candies[k] - targetcandy;
        int movesoranges = oranges[k] - targetorange;
        if (candies[k] > targetcandy && oranges[k] > targetorange) {
            moves += (movescandies > movesoranges) ? movesoranges : movescandies;
            candies[k] -= (movescandies > movesoranges) ? movesoranges : movescandies;
            oranges[k] -= (movescandies > movesoranges) ? movesoranges : movescandies;
            k--;
            continue;
        }

        else if (candies[k] > targetcandy) {
            moves += movescandies;
            candies[k] -= movescandies;
            k--;
            continue;
        }

        else if (oranges[k] > targetorange) {
            moves += movesoranges;
            oranges[k] -= movesoranges;
            k--;
            continue;
        }
    }
    return moves;
}

int main() {
    int t, n;
    scanf("%d", &t);
    long long result[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int candies[n];
        int oranges[n];
        result[i] = move(candies, oranges, n);
    }
    for (int i = 0; i < t; i++) {
        printf("%lld ", result[i]);
    }
    return 0;
}