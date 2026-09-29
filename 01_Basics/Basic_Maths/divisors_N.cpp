#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> a;
        for(int i = 1;i <= n;i++){
            if(n % i == 0){
                a.push_back(i);
            }
        }
        return a;
    }
};