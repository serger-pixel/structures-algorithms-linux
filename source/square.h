#pragma once
#include <string>
using namespace std;
//Link: https://codeforces.com/contest/2167/problem/A

string solution(int a, int b, int c, int d) {
	if ((a==b) and (b == c) and (c == d)) {
		return "YES";
	};
	return "NO";
}