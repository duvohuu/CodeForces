#include <iostream>

using namespace std;

int main() {
    int n, m;
    int count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
                if (j == m - 1) 
                    cout << endl;
            } 
        }

        else if (i % 2 != 0 && count % 2 == 0) {
            for (int j = 0; j < m - 1; j++) {
                cout << ".";
            }
            cout << "#" << endl;
            count++;
        } 

        else {
            cout << "#";
            for (int j = 1; j < m; j++) {
                cout << ".";
                if (j == m - 1) {
                cout << endl;
                }
            }
            count++;
        }
    }
    return 0;
}