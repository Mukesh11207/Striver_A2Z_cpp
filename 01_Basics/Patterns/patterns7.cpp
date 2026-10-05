#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
        for(int i = 1;i <= n;i++){
            for(int j = 1;j < 2*n;j++){
                if(j < n - i + 1 || j > n + i - 1){
                    cout << " ";
                }else{
                    cout << "*";
                }
            }//time complexity = O(n^2),space complexity :- O(1)
            cout << endl;
        }
    }
};