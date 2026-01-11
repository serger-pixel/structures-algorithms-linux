#pragma once
using namespace std;
#include <string>
#include <unordered_map>
//Link: https://codeforces.com/contest/2167/problem/B?locale=en

string solution(string str1, string str2, int len) {
	unordered_map<char, int> table1;
	unordered_map<char, int> table2;
	for (int i = 0; i < len; i++) {

		if (table2.find(str2[i]) == table2.end()) {
			table2.insert(pair<char, int>(str2[i], 1));
		}
		else {
			table2[str2[i]]++;
		}

		if (table1.find(str1[i]) == table1.end()) {
			table1.insert(pair<char, int>(str1[i], 1));
		}
		else {
			table1[str1[i]]++;
		}
	}

	if (table1 == table2) {
		return "YES";
	};
	return "NO";
}