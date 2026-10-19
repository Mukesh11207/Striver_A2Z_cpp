#include <iostream>
using namespace std;
/* n = 4
****
*  *
*  *
****
*/
class Solution {
public:
    void pattern21(int n) {
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(i == 0||i == n - 1 || j == 0 || j == n - 1){
                cout << "*";
                }
                else{
                    cout << " ";
                }
            }//time complexity :- O(n^2),space complexity :- O(1)
            cout << endl;
        }
       
    }
};