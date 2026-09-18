#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestDigit(int n) {
        int a = n % 10;
        while(n > 0){
            a = max(a,n%10);
            n /= 10;
        }
        return a;
    }
};