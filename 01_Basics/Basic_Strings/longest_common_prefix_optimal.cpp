#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			if(str.empty()){
                return "";
            }
            for(int i = 0;i < str[0].size();i++){
                char ch = str[0][i];
                for(int j = 1;j < str.size();j++){
                    if(i == str[j].size() || ch != str[j][i]){
                        return str[0].substr(0,i);
                    }
                }
            }
            return str[0];
		}//time complexity :- O(N*M),space complexity :- O(M)(worst case)
        //M -> max length of string
};