  // Q57: Find the sum of array elements.


#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements of array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}