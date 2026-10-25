#include <iostream>
using namespace std;
class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			if(s.size() != t.size()){
                return false;
            }
            int freq[26] = {0};
            for(int i = 0;i < s.size();i++){
                freq[s[i] - 'a']++;
                freq[t[i] - 'a']--;
            }
            for(int i : freq){
                if(i != 0){
                    return false;
                }
            }//time complexity :- O(N),space complexity :- O(1)
            return true;
		}//brute force with comparing sorted strings
};