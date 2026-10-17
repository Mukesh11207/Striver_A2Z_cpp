#include <iostream>
using namespace std;
/* n = 4
   A
  ABA
 ABCBA
ABCDCBA
*/
class Solution {
public:
    void pattern17(int n) {
        for(int i = 0;i < n;i++){
            char ch = 'A';
            for(int j = 0;j < 2*n - 1;j++){
                if(j < n - i - 1 || j >= n + i){
                    cout << " ";
                }
                else if(j >= n - i - 1 && j < n - 1){
                    cout << ch;
                    ch++;
                }
                else if(j == n - 1){
                    cout << ch;
                }
                else{
                    ch--;
                    cout << ch;
                }
            }
            cout << endl;
        }//time complexity :- O(n^2),space :- O(1)
    }
};