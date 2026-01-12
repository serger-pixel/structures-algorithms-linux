#include <iostream>
#include <string>
using namespace std;
//Link: https://leetcode.com/problems/length-of-last-word/?envType=problem-list-v2&envId=string

int lengthOfLastWord(string s) {
        int endWord = 1;
        int startWord = 0;
        int len = s.length();
        for (int i = len - 1; i > 0; i--){
            if (s[i] != ' '){
                endWord = i;
                break;
            }
        }
        for (int i = endWord - 1; i > 0 ;i--){
            if(s[i] == ' '){
                startWord = i;
                break;
            }
        }
        return endWord - startWord;
}

int main() {
    string s = "a ";
    cout << lengthOfLastWord(s);
    return 0;
}
