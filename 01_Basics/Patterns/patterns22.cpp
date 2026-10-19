#include <iostream>
using namespace std;
/* n = 4
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 */
class Solution {
public:
    void pattern22(int n) {
        for(int i = 0;i < 2*n - 1;i++){
            for(int j = 0;j < 2*n - 1;j++){
                int top = i;
                int bottom = 2*n - 2 - j;
                int left = j;
                int right = 2*n - 2 - i;
                cout << n - min(min(left,right),min(top,bottom)) << " ";
            }//time complexity :- O(n^2),space complexity :- O(1)
            cout << endl;
        }
    }
};