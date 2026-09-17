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
    bool isPalindrome(int n) {
        return n == rev(n);
    }
};