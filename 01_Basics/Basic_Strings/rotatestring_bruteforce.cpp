#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.length() != goal.length()){
                return false;
            }
            for(int i = 0;i < s.length();i++){
                string rotated = s.substr(i) + s.substr(0,i);
                if(rotated == goal){
                    return true;
                }
            }//time complexity :- O(n^2),space complexity :- O(n)
            return false;
		}
};