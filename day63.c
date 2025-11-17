// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[i]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("%d", arr[k-1]);
    return 0;
}