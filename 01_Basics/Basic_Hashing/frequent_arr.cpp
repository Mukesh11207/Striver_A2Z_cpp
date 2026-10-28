#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int y = 0;
        for(int i = 0;i < nums.size();i++){
            y = max(y,nums[i]);
        }
        int hash[y + 1] = {0};
        for(int x : nums){
            hash[x]++;
        }
        int maxCount = 0;
        int el = -1;
        for(int i = 0;i <= y;i++){
            if(maxCount < hash[i]){
                maxCount = hash[i];
                el = i;
            }
        }
        return el;
    }//time complexity :- O(N),space complexity :- O(N) -> WORSTCASE
};