#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        int maxEle,secEle;
        maxEle = secEle = -1;
        int maxFreq = 0,secFreq = 0;

        unordered_map<int,int> mpp;

        for(int i = 0;i < n;i++){
            mpp[nums[i]]++;
        }

        for(auto it : mpp){
            int ele = it.first;
            int freq = it.second;
        
            if(freq > maxFreq){
                secFreq = maxFreq;
                maxFreq = freq;
                secEle = maxEle;
                maxEle = ele;
            }
            else if(freq == maxFreq){
                maxEle = min(maxEle,ele);
            }
            else if(freq > secFreq){
                secFreq = freq;
                secEle = ele;
            }
            else if(freq == secFreq){
                secEle = min(secEle,ele);
            }
        }
        return secEle;
    }//time complexity :- O(N),space complexity :- O(N)(worst case)
};