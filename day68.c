// Q118 Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n-1];
    for (int i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);

    int sum = 0, total = n * (n + 1) / 2;
    for (int i = 0; i < n-1; i++)
        sum += arr[i];

    printf("%d", total - sum);
    return 0;
}