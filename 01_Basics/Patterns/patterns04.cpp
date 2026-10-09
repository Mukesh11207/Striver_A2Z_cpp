#include <iostream>
using namespace std;
/*n = 4
1
22
333
4444*/
class Solution {
public:
    void pattern4(int n) {
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= i;j++){
                cout << i;
            }//Time complexity :- O(n^2),Space complexity :- O(1)
            cout << endl;
        }
    }
};