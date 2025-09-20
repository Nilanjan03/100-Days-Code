// Q58: Find the maximum and minimum element in an array.


#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements of array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is max and min
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Display result
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}