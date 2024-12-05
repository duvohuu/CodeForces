#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findmax(vector<int>&squad, int n) {
    int countmax = 0;
    int key = squad[0];
    for (int i = 1; i < n; i++) {
        if (squad[i] > key) {
            key = squad[i];
            countmax = i;
        }
    }
    for (int j = countmax; j > 0; j--) {
            swap(&squad[j],&squad[j - 1]);
    }
    return countmax;
}

int findmin(vector<int>&squad, int n) {
    int countmin = 0;
    int key = squad[0];
    for (int i = 1; i < n; i++) {
        if (squad[i] <= key) {
            key = squad[i];
            countmin = n - i - 1;
        }
    }
    return countmin;
}

int main() {
    int n;
    cin >> n;
    vector<int>squad(n);
    for (int i = 0; i < n; i++) {
        cin >> squad[i];
    }
    int result = findmax(squad, n) + findmin(squad, n);
    cout << result;
    return 0;

}