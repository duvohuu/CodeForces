#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;   
    vector<int>v1(n);
    vector<int>v2(n);
    while(n--) {
        cin >> v1[n];
        cin >> v2[n];
        int remainder = v1[n] % v2[n];
        if (remainder == 0) cout << "0" << endl;
        else cout << v2[n] - remainder << endl  ;
    }
    return 0;
}