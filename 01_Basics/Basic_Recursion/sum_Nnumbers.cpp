#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
			if(N == 0){
                return 0;
            }
            return N + NnumbersSum(N - 1);
		}//time complexity :- O(N),space complexity :- O(N)(in worst case O(N) because of recursion stack space)
};