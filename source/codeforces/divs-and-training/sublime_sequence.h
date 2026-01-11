#include<iostream>
using namespace std;
//Link: https://codeforces.com/contest/2148/problem/A


int solutions(int n, int x){
    if (n%2 == 0){
        return 0;
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    int n, x;
    for (int i = 0; i < t; i++){
        cin >> x >> n;
        cout << solutions(n, x) << endl;
    }
}