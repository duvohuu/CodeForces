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
            i++;
        } while (a[i] < pivot);
        do {
            j--;            
        } while (a[j] > pivot);

        if (j > i) swap(a[i], a[j]);
        else return j;
    }
}

void sort(int a[], int l, int r) {
    if (l >= r) return;
    int p = partition(a, l, r);
    sort(a, l, p);
    sort(a, p + 1, r);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        for (int &x: a) {
            cin >> x;
        }
        sort(a, 0, 2);
        cout << a[1] << endl;
    }
    return 0;
}