#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while (1) {
        do {
            ++i; 
        } while (a[i] < pivot);
        do {
            --j;
        } while (a[j] > pivot);
        if (j > i) {
            swap(&a[i], &a[j]);   
        } 
        else return j;
    }
}

void quicksort(int a[], int l, int r) {
    if (l >= r) return; 
    int p = partition(a, l, r);
    quicksort(a, l, p);
    quicksort(a, p + 1, r);
}

int main() {
    int m;
    scanf("%d", &m);
    int n;
    scanf("%d", &n);
    int money = 0;
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, m - 1);
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) money -= a[i];
    }
    printf("%d", money);
        
    return 0;
}