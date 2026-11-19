#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    int sumdigits(int num){
        int x = 0;
        while(num > 0){
            x += num % 10;
            num /= 10;
        }
        return x;
    }
public:
	int addDigits(int num){
		int ans = sumdigits(num);
        while(ans > 9){
            ans = sumdigits(ans);
        }
        return ans;
	}
};