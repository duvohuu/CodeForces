#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int faces(string s) {
    if (s == "Tetrahedron") return 4;
    else if (s == "Cube") return 6;
    else if (s == "Octahedron") return  8;
    else if (s == "Dodecahedron") return 12;
    return 20;
}

int main() {
    int n;
    cin >> n;
    vector<vector<char>> polyhedrons(n);
    for (vector<char> &poly : polyhedrons) {
        string s;
        cin >> s;
        poly = vector<char>(s.begin(), s.end()); 
    }
    int count = 0;
    for (vector<char> poly : polyhedrons) {
        string myString (poly.begin(), poly.end());
        count += faces(myString);
    }
    cout << count;
    

}