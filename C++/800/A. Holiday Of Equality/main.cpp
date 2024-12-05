#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int &x: a) 
        cin >> x;
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    int welfare = 0;
    for (int i = 0; i < n; i++) {
        welfare += max - a[i];
    }
    cout << welfare;
    return 0;
}