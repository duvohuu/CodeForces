#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int *strengths = (int*)malloc(n * sizeof(int));

        for (int i = 0; i < n; ++i) {
            scanf("%d", &strengths[i]);
        }

        // Sắp xếp danh sách sức mạnh theo thứ tự tăng dần
        qsort(strengths, n, sizeof(int), compare);

        int minDifference = strengths[n - 1] - strengths[0];

        // Thử tất cả các cách chia đôi các vận động viên để tìm giá trị nhỏ nhất
        for (int i = 1; i < n; ++i) {
            int difference = strengths[i] - strengths[i - 1];
            minDifference = (minDifference < difference) ? minDifference : difference;
        }

        printf("%d\n", minDifference);
        free(strengths);
    }

    return 0;
}
