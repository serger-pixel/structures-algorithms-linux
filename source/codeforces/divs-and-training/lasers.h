#include<iostream>
using namespace std;
//Link: https://codeforces.com/contest/2148/submit


int solutions(int m, int n){
    return n+m;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i<t; i++){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        for (int j = 0; j<n; j++){
            cin >> x;
        }

        for (int j = 0; j<m; j++){
            cin >> y;
        }
        cout << solutions(n, m) << endl;
    }
}
