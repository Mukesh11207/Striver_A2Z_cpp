#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int x = nums.at(0);
        for(int i = 0;i < nums.size() - 1;i++){
            nums[i] = nums[i + 1];
        }
        nums[nums.size() - 1] = x;
    }//time complexity :- O(n),space complexity :- o(1)
};