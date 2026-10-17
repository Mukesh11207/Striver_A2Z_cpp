#include <iostream>
using namespace std;
/* n = 4
D 
C D 
B C D 
A B C D */
class Solution {
public:
    void pattern18(int n) {
        for(int i = n;i > 0;i--){
            char ch = 'A' + i - 1;
            for(int j = 0;j <= n - i;j++){
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }//time complexity :- O(n^2),space complexity :- O(1)
    }
};