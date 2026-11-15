#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	if (s.size() != t.size()){
            return false;
        }
        int mp1[26] = {0};
        int mp2[26] = {0};

        for(int i = 0;i < s.size();i++){
            int x = s[i] - 'a';
            int y = t[i] - 'a';
            if(mp1[x] == 0 && mp2[y] == 0){
                mp1[x] = t[i];
                mp2[y] = s[i];
            }
            else if(mp1[x] != t[i] || mp2[y] != s[i]){
                return false;
            }
        }//time complexity :- O(N),space complexity :- O(1)
        return true;
    }
};