#include <iostream>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= 2*n;j++){
                int a;
                if(j <= i){
                    a = j;
                    cout << j;
                }
                else if(j > 2*n - i){
                    cout << a;//instead of a 2*n - j + 1 or 2*n - 2 can be used
                    a--;
                }
                else{
                    cout << " ";
                }
            }//time complexity :- O(n^2),space complexity :- O(1)
            cout << endl;
        }
    }
};