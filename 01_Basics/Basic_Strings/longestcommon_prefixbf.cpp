#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			if(str.empty()){
                return "";
            }
            sort(str.begin(),str.end());
            string first = str.front();
            string second = str.back();

            string res = "";
            for(int i = 0;i < first.size();i++){
                if(first[i] != second[i]){
                    break;
                }
                res += first[i];
            }//time complexity :- O(NlogN * M),space complexity :- O(M)
            //M is the max length of string
            return res;
		}
};