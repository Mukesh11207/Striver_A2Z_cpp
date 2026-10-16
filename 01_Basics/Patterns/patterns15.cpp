#include <iostream>
using namespace std;
/*
n = 4
ABCD
ABC
AB
A
*/
class Solution {
public:
    void pattern15(int n) {
        for(int i = n;i > 0;i--){
            char ch = 'A';
            for(int j = 0;j < i;j++){
                cout << ch;
                ch++;
            }
            cout << endl;
        }//time complexity :- O(n^2),space complexity :- O(1)
    }
};