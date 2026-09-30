#include <iostream>
using namespace std;
class Solution {
public:
    int LCM(int n1,int n2) {
        int a,b;
        a = max(n1,n2);
        b = min(n1,n2);
        for(int i = a;i < a * b;i += a){//instead of i < a*b it can be left blank "; ;""
            if(i % b == 0) return i;
        }
        return n1 * n2;
        //optimal approach is lcm = n1 * n2/gcd(n1,n2);
        //because lcm(n1,n2)*gcd(n1,n2) = n1*n2;
    }
};