#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for(int i = 0;i < n;i++){
            for(int j = 0;j < 2*n-1-i;j++){
                if(j < i){
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }//time complexity :- O(n^2),space complexity :- O(1)
            cout << endl;
        }
    }
};