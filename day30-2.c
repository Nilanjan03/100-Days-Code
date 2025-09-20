// Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements of array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    // Display result
    printf("Total positive numbers = %d\n", positiveCount);
    printf("Total negative numbers = %d\n", negativeCount);
    printf("Total zeros = %d\n", zeroCount);

    return 0;
}