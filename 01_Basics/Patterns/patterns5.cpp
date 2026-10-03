#include <iostream>
using namespace std;
class Solution {
public:
    void pattern5(int N) {
        for(int i = N;i > 0;i--){
            for(int j = 0;j < i;j++){
                cout << "*";
            }
            cout << endl;
        }//time complexity :- O(n^2),space complexity :- O(1)
    }
};