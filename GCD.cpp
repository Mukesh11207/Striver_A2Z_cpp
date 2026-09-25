class Solution {
public:
    int GCD(int n1,int n2) {
       if(n2==0) return n1;
       if(n1>n2){
        return GCD(n1-n2,n2);
       }
       else{
        return GCD(n1,n2-n1);
       }
    }
};