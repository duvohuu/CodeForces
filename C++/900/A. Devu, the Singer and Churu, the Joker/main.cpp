#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int a[n];
    int minutes = (n - 1) * 10 ;
    int jokes = (n - 1) * 2;
    for (int &x: a) {
        cin >> x;
        minutes += x;
    }
    if (minutes > d) {
        cout << "-1" << endl;
        return 0;
    }
    int exceed = d - minutes;
    jokes += (exceed / 5);
    cout << jokes << endl;
    
    return 0;
}