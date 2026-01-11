#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> toys) {
    int n = toys.size();
    for (int i = 0; i < n; i++) {
        cout << toys[i] << " ";
    }
    cout << endl;
}

void solution(int n) {
    vector<int> toys = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> toys[i];
    }
    for (int i = 1; i < n; i++) {
        if (toys[i] % 2 != toys[i - 1] % 2) {
            sort(toys.begin(), toys.end());
            printVec(toys);
            return;
        }
    }
    printVec(toys);
}
int main() {

    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++) {
        cin >> n;
        solution(n);
    }

    return 0;
}