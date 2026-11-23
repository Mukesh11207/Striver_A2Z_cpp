#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max = INT_MIN;
        for(int i : nums){
            if(i > max){
                max = i;
            }
        }//time complexity :- O(n),space complexity :- O(1)
        return max;
    }
};