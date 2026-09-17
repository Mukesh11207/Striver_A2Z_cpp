int rev(int n){
    int x = 0;
    while(n > 0){
        x = x*10 + n%10;
        n /= 10;
    }
    return x;
}
class Solution {
public:
    int reverseNumber(int n) {
        return rev(n);
    }
};