#include <iostream>
using namespace std;

class Solution {
public:
    void pattern10(int n) {
        string a = "";
        for(int i = 0;i < 2*n-1;i++){
            if(i < n){
                a.push_back('*');
                cout << a + "\n";
            }
            else{
                a.pop_back();
                cout << a << endl;
            }
        }
    }
};