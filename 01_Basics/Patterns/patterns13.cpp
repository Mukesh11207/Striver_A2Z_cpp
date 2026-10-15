#include <iostream>
using namespace std;
/* n = 4
1 
2 3 
4 5 6 
7 8 9 10 
*/
class Solution {
public:
    void pattern13(int n) {
        int a = 1;
        for(int i = 0;i < n;i++){
            for(int j = 0;j <= i;j++){
                cout << a << " ";
                a++;
            }//time complexity :- O(n^2),space complexity :- O(1)
            cout << endl;
        }
    }
};