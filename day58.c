// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], answer[n];
    
    for(int i=0;i<n;i++) scanf("%d", &nums[i]);
    
    int left = 1;
    for(int i=0;i<n;i++){
        answer[i] = left;
        left *= nums[i];
    }
    
    int right = 1;
    for(int i=n-1;i>=0;i--){
        answer[i] *= right;
        right *= nums[i];
    }

    for(int i=0;i<n;i++) printf("%d ", answer[i]);
    return 0;
}