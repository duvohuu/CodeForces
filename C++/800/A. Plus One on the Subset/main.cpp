#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1;
    int j = r + 1;
    while (1) {
        do {
            ++i;
        } while (a[i] < pivot);

        do {
            --j;
        } while (a[j] > pivot);

        if (j > i) {
            swap(a[i], a[j]);
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
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int &x: a) {
            cin >> x;
        }
        quicksort(a, 0, n - 1);
        cout << a[n - 1] - a[0] << endl;
    }
   
    return 0;
}