#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int removeDuplicates(vector<int>& nums) {
        int max = nums[nums.size() - 1] + 1;
        int current = nums[0];
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == current) {
                nums[i] = max;
            }
            else {
                current = nums[i];
                k++;
            }
        }
        sort(nums.begin(), nums.end());
        return k;
    }


int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(nums);
    for (int el: nums){
        cout << el << " ";
    }
    return 0;
}
