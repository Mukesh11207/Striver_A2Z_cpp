#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        int a = 1;
        for(int i = 0;i < n;i++){
            if(i % 2 == 0) a = 1;
            for(int j = 0;j <= i;j++){
                cout << a << " ";
                a = 1 - a;//flips 1 to 0 and 0 to 1
            }
            cout << endl;
        }//time complexity :- O(n^2),space :- O(1)
    }
};