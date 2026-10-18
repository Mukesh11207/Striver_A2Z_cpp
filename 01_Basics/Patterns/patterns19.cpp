#include <iostream>
using namespace std;

/* n = 4
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
class Solution {
public:
    void pattern19(int n) {
        for(int i = 0;i < 2 * n;i++){
            for(int j = 0;j < 2 * n;j++){
                if(i < n){
                    if(j < n - i || j >= n + i){
                        cout << "*";
                    }else{
                        cout << " ";
                    }
                }
                else{
                    if(j < i - n + 1 || j >= 3*n - i -1){
                        cout << "*";
                    }else{
                        cout << " ";
                    }
                }
            }//time complexity :- O(n ^ 2),space complexity :- O(1)
            cout << endl;
        }
    }
};