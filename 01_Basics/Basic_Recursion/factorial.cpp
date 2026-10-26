#include <iostream>
using namespace std;
class Solution{	
	public:
		long long int factorial(int n){
			if(n == 0){
                return 1;
            }
            return n * factorial(n - 1);
		}
        //time complexity :- O(N),space complexity :- O(N)-> call stack grows with each recursive call
};