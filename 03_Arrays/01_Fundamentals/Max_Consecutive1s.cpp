#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max1 = 0;
        for(int i : nums){
            if(i == 1){
                count++;
                max1 = max(count,max1);
            }
            else{
                count = 0; 
            }
        }
        return max1;
    }//time complexity :- O(n),space complexity :- O(1)
};