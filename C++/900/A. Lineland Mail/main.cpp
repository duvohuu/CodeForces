#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cities(n);
    for (int i = 0; i < n; ++i) {
        cin >> cities[i];
    }

    for (int i = 0; i < n; ++i) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        // Minimum cost from i-th city to the left neighbor
        if (i > 0) {
            mini = min(mini, abs(cities[i] - cities[i - 1]));
        }

        // Minimum cost from i-th city to the right neighbor
        if (i < n - 1) {
            mini = min(mini, abs(cities[i] - cities[i + 1]));
        }

        // Maximum cost from i-th city to either the leftmost or rightmost city
        maxi = max(abs(cities[i] - cities[0]), abs(cities[i] - cities[n - 1]));

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}
