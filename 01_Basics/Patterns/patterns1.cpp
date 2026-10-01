#include <iostream>
using namespace std;
class Solution {
public:
    void pattern1(int n) {
        for(int i = 0;i < n;i++){
            int j = 0;
            while(j < n){
                cout << "*";
                j++;
            }
            cout << endl;
            // Time Complexity O(n²), Space Complexity O(1)
        }
    }
};