#include <iostream>
using namespace std;

class Solution{
public:
	int sum(int arr[], int n) {
        int sum = 0;
        for(int i = 0;i < n;i++){
            sum += arr[i];
        }//time complexity :- O(N),space complexity :- O(1)
        return sum;
	}
};