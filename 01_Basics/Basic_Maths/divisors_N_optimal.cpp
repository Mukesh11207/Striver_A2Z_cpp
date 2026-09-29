#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> a;
        for(int i = 1;i <= sqrt(n);i++){
            if(n % i == 0){
                a.push_back(i);
            
            if(n / i != i){
                a.push_back(n/i);
            }
        }
    }
        sort(a.begin(),a.end());
        //for more optimised instead of sort 2 vectors are maintained, one with small elements other with larger
        //(n/i) elements then they are joined using for loop,second vector iterated from end 
        //sort - O(nlogn), for - O(n)
        return a;
    }
};