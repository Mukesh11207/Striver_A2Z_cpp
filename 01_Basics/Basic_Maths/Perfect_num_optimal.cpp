#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
        int sum = 0;
        if(n==1) return false;
        for(int i = 1;i < sqrt(n);i++){
            if(n % i == 0){
                sum += i;

                if(n/i != n && i != n/i){
                    sum += n/i;
                }
            }
        }
        return sum == n;
    }
};