#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int m = INT_MAX;
    while(n--){
        int a,p;
        cin >> a >> p;
        if (p < m){
            m = p;
        }
        sum += m*a;
    }
    cout << sum << endl;
    return 0;
}