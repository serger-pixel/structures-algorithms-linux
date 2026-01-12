#include <iostream>
#include <string>
using namespace std;
//Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=problem-list-v2&envId=string

int strStr(string haystack, string needle) {
    int subLen = needle.length();
    int mainLen = haystack.length();
    for(int i = 0; i < mainLen; i++){
        if (haystack.substr(i, subLen).compare(needle) == 0){
            return i;
        }
    }
    return -1;
    }
int main() {
    
    return 0;
}
