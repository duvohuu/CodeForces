#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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

        if (i < j) {
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

bool smallest(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if ((a[i + 1] - a[i]) > 1)
            return false;
    }
    return true;
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

        if (smallest(a, n)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}