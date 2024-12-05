#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;
        int nearest_hour = 23, nearest_minute = 60;
        for (int i = 0; i < n; i++) {
            int h, m;
            cin >> h >> m;
            int difference_hour;
            int difference_minute;
            if (m < M) {
                difference_hour = (h <= H) ? (h + (24 - H - 1)) : (h - H - 1);
                difference_minute = 60 - M + m;

            }
            else {
                difference_hour = (h < H) ? (h + (24 - H )) : (h - H);
                difference_minute = m - M;
            }

            if (difference_hour == nearest_hour && difference_minute < nearest_minute) 
                nearest_minute = difference_minute;
            
            else if (difference_hour < nearest_hour) {
                nearest_hour = difference_hour;
                nearest_minute = difference_minute;
            }      
        }
        
        cout << nearest_hour << " " << nearest_minute << endl;
    }
    return 0;
}