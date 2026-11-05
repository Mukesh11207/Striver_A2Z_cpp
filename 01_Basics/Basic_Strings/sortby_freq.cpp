#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		vector<char> frequencySort(string& s){
			unordered_map<char,int> freq;
            for(char c : s){
                freq[c]++;
            }
            vector<char> a;
            for(auto it : freq){
                a.push_back(it.first);
            }
            sort(a.begin(),a.end(),[&](char a,char b){
                if(freq[a] == freq[b]){
                    return a < b;
                }
                return freq[a] > freq[b];
            });
            return a;
		}//time complexity :- O(n + klogk),space complexity :- O(k)
};