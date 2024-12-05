#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    char result[100000];
    cin >> n;    
    cin >> result;
    for (int i = 0; i < n; i++) {
        if (result[i] == 'A') count++;
    }
    if (count > n - count) printf("Anton");
    else if (count < n - count) printf("Danik");
    else cout <<"Friendship";
    return 0;
}