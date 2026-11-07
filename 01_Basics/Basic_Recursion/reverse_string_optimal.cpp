#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    void reverse(vector<char>& s,int left,int right){
        if(left >= right) return;

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        reverse(s,left + 1,right - 1);
    }
	vector<char> reverseString(vector<char>& s){
		//2 pointer recursive approach
        int left = 0;
        int right = s.size() - 1;
        reverse(s,left,right);
        return s;
	}//time :- O(N),space :- O(N)(recursion stack)
};