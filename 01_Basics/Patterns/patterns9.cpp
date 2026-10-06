#include <iostream>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        for(int i = 0;i < n;i++){
            for(int j = 0;j < 2*n;j++){
                if(j <= n - i - 1 || j > n + i){
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }
            cout << endl;
        }

        for(int i = 0;i < n;i++){
            cout << " ";
            for(int j = 0;j < 2*n - 1 - i;j++){
                if(j < i){
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
};