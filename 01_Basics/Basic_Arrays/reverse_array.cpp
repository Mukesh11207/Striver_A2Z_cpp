#include <iostream>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        for(int i = 0;i < n/2;i++){
            int temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }//time complexity :- O(N),space complexity :- O(1)
    }
};
//2-pointer approach
/*class Solution{
public:
    void reverse(int arr[], int n){
        //2 pointer approach
        int left = 0;
        int right = n - 1;
        while(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
};
*/