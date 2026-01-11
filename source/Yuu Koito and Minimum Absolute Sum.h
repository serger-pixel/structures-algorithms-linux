#include <iostream>
#include <cmath>
using namespace std;

//Link: https://codeforces.com/problemset/problem/266/B?locale=en

 
 
void solution(int n){
    int* mass = new int[n];
    int temp;
    cin >> temp;
    mass[0] = temp;
    for(int i = 1; i < n-1; i++){
        cin >> temp;
        if (temp < 0){
            mass[i] = 0;
        }
        else{
            mass[i] = temp;
        }
    }



    cin >> mass[n - 1];
    if (mass[0] == -1 && mass[n-1] == -1){
        mass[0] = 0;
        mass[n-1] = 0;
    }

    else if(mass[0] == -1 && mass[n-1] != -1){
        mass[0] = mass[n - 1];
    }

    else if (mass[n-1] == -1 && mass[0] != -1){
        mass[n-1] = mass[0];
    }


    cout << abs(-mass[0] + mass[n - 1]) << endl;
    for(int i = 0; i< n; i++){
        cout << mass[i] << " ";
    }
    cout << endl;
}
 
int main(){
    int cnt, n;
    cin >> cnt;
    for (int i = 0; i < cnt; i++){
        cin >> n;
        solution(n);
    }
    return 0;
}