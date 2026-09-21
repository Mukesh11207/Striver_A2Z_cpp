#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        vector<int> a;
        int b = n,sum = 0;
        while(n > 0){
            a.push_back(n % 10);
            n /= 10;
        }
        for(int i : a){
            sum += pow(i,a.size());
        }
        return sum == b;
    }
};