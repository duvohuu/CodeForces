#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sieve(vector<int> &like) {
    for (int i = 0; i < 1667; i++) {
        if(i % 3 != 0 && i % 10 != 3) {
            like.push_back(i);
        }
    }
    
}

int main() {
    int t, n;
    cin >> t;
    vector<int> like;
    sieve(like);
    while (t--) {
        cin >> n;
        cout << like[n - 1] << endl;
    }
    return 0;
}