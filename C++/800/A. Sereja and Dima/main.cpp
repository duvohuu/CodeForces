#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int Sereja = 0;
    int Dima = 0;
    deque<int> cards;
    while(n--) {
        int x;
        cin >> x;
        cards.push_back(x);
    }

    int size = cards.size();
    for (int i = 0; i < size; i++) {
        if (cards.front() > cards.back()) {
            if (i % 2 == 0) Sereja += cards.front();
            else Dima += cards.front();
            cards.pop_front();
        }
        else {
            if (i % 2 == 0) Sereja += cards.back();
            else Dima += cards.back();
            cards.pop_back();
        }
    }
    cout << Sereja << " " << Dima;
    return 0;
}