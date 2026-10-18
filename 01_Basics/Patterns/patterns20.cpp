#include <iostream>
using namespace std;
/* n = 4
*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/
class Solution {
public:
    void pattern20(int n) {
        int x = n - 1;
        int isS = 2;
        for(int i = 0;i < 2*n - 1;i++){
            if(i < n){
            for(int j = 0;j < 2*n;j++){
                    if(j <= i || j >= 2*n - 1 - i){
                        cout << "*";
                    }
                    else{
                        cout << " ";
                    }
                }
            }
            else{
                for(int k = 0;k < x;k++){
                    cout << "*";
                }
                for(int k = 0;k < isS;k++){
                    cout << " ";
                }
                for(int k = 0;k < x;k++){
                    cout << "*";
                }
                x--;
                isS += 2;
            }//time complexity :- O(n^2),space complexity :- O(1)
        cout << endl;
        }
    }
};