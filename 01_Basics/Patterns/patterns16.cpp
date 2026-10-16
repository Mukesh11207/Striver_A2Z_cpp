#include <iostream>
using namespace std;
/* n = 4
A
BB
CCC
DDDD
*/
class Solution {
public:
    void pattern16(int n) {
        char ch = 'A';
        for(int i = 0;i < n;i++){
            for(int j = 0;j <= i;j++){
                cout << ch;
            }
            ch++;
            cout << endl;
        }//time complexity :- O(n^2),space complexity :- O(1)
    }
};