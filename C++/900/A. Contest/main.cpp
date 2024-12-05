#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int misha_point = (0.3*a > a - c*a/250) ? 0.3*a: a - c*a/250;
    int vasya_point = (0.3*b > b - d*b/250) ? 0.3*b: b - d*b/250;
    if (misha_point > vasya_point) cout << "Misha";
    else if (misha_point < vasya_point) cout << "Vasya";
    else cout << "Tie";
    return 0;
}