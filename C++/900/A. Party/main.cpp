#include <bits/stdc++.h>

using namespace std;

const int N = 2005;

vector<int> graph[N];
int dp[N];

int dfs(int u) {
    if (dp[u] != -1) return dp[u];
    int ans = 0;
    for (int v : graph[u]) {
        ans = max(ans, 1 + dfs(v));
    }
    return dp[u] = ans;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int manager;
        cin >> manager;
        if (manager != -1) {
            graph[manager].push_back(i);
        }
    }

    memset(dp, -1, sizeof(dp));
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dfs(i));
    }

    cout << ans + 1 << endl;

    return 0;
}
