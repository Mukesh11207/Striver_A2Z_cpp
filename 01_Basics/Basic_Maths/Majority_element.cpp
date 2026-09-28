#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i = 0;i < nums.size();i++){
            a[nums[i]]++;
        }
        for(auto x : a){
            if (x.second > nums.size()/2){
                return x.first;
            }
        }
    }
};