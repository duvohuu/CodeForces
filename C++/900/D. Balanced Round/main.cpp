#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int group = 1, same = 0;
    if (n == 1)
    {
        cout << "0\n";
        return;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > k) group = 1;
        else group++;
        same = max(same, group);

    }
    cout << n - same << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}