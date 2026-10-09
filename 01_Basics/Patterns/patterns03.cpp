#include <iostream>
using namespace std;
/*n = 4
1
12
123
1234*/

class Solution {
public:
    void pattern3(int n) {
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= i;j++){
                cout << j;
            }
            cout << endl;
        }
    }
};