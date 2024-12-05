#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1;
    int j = r + 1;
    while(1) {
        do {
            ++i;
        } while(a[i] < pivot);

        do {
            --j;
        } while(a[j] > pivot);

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
    int a[4]; 
    for (int &x: a) {
        cin >> x;
    }
    quicksort(a, 0, 3);
    cout << (a[1] - a[0]+ a[2])/2 << " " << a[1] - (a[1] - a[0]+ a[2])/2<< " " << a[2] - (a[1] - a[0]+ a[2])/2;
    return 0;
}