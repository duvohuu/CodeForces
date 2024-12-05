#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while (1) {
        do {
            i++;
        } while (a[i] < pivot);
        do {
            j--;
        } while (a[j] > pivot);
        if (i < j) swap(a[i], a[j]);
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
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int &x: a) {
        cin >> x;
    }
    quicksort(a, 0, m - 1);
    int min = a[n - 1] - a[0];
    for (int i = 1; i <= m - n; i++) {
        if (a[i + n - 1] - a[i] < min) min = a[i + n - 1] - a[i];
    }
    cout << min;
    return 0;
}