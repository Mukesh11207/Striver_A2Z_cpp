#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i = n;i > 0;i--){
            for(int j = 1;j <= i;j++){
                cout << j;
            }
            cout << endl;
            //time complexity :- O(n^2),space complexity :- O(1);
        }
    }
};