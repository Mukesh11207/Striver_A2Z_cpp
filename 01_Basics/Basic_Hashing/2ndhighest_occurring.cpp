#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int x = -1;
        for(int i = 0;i < nums.size();i++){
            x = max(x,nums[i]);
        }
        int hash[x + 1] = {0};
        for(int i : nums){
            hash[i]++;
        }
        int el = -1;
        int max = 0;
        for(int i = 0;i <= x;i++){
            if(max < hash[i]){
                max = hash[i];
                el = i;
            }
        }
        int y = max;
        hash[el] = 0;
        max = 0;
        for(int i = 0;i <= x;i++){
            if(max < hash[i] && hash[i] != y){
                max = hash[i];
                el = i;
            }
        }
        return el;
    }
};