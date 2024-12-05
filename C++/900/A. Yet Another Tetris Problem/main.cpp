#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x; a.push_back(x);
    }
    vector<int> dif;
    for (int i=0;i<a.size()-1;i++){
        dif.push_back(fabs(a[i]-a[i+1]));
    }
    bool flag = true;
    for (int i : dif){
        if (i % 2==0){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if (not flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        solve();
        cout << endl;
    }
}