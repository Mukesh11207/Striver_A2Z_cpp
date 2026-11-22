#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int i = 0;
        for(int x : nums){
            if(x == target){
                return i;
            }
            else{
                i++;
            }
        }//time complexity :- O(n),space complexity :- O(1)
        return -1;
    }
};