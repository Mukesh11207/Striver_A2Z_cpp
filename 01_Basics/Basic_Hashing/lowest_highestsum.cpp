#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int i : nums){
            mpp[i]++;
        }
        int min0 = INT_MAX;
        int max0 = -1;

        for(auto it : mpp){
            min0 = min(min0,it.second);
            max0 = max(max0,it.second);
        }

        return min0 + max0;
    }//time complexity :- O(n),space complexity :- O(k),k = no of distinct elements
};
