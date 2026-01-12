#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// Link: https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array

int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == val){
                nums[i] = -1;
                k++;
            }
        }
        sort(nums.begin(), nums.end(), greater<int>());
        return nums.size() - k;
}

int main() {

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = removeElement(nums, val);
    return 0;
}
