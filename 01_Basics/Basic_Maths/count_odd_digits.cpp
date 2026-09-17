class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while(n > 0){
            int a = n%10;
            n /= 10;

            if(a % 2 == 1){
                count++;
            }
        }
        return count;
    }
};