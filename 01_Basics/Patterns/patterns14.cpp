#include <iostream>
using namespace std;
/*n = 4
A
AB
ABC
ABCD*/
class Solution {
public:
    void pattern14(int n) {
        for(int i = 0;i < n;i++){
            char c = 'A';
            for(int j = 0;j <= i;j++){
                cout << c;
                c++;
            }//time complexity :- O(n^2),space complexity :- O(1)
            cout << endl;
        }
    }
};