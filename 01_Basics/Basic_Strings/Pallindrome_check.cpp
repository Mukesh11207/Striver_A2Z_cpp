#include <iostream>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
            int n = s.size();
            for(int i = 0;i < n/2;i++){
                if(s[i] != s[n - i - 1]){
                    return false;
                }
            }//time complexity :- O(N),space complexity :- O(1)
            return true;
		}//2 pointer approach using right, left
};