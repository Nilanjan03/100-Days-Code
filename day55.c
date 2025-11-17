// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int candidate = -1, count = 0;

    // Finding candidate using Moore's Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verifying candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) {
            count++;
        }
    }

    if(count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}