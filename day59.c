// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int sum = 0;
    for(int i=0;i<k;i++) sum += arr[i];
    int maxsum = sum;

    for(int i=k;i<n;i++){
        sum += arr[i] - arr[i-k];
        if(sum > maxsum) maxsum = sum;
    }

    printf("%d", maxsum);
    return 0;
}