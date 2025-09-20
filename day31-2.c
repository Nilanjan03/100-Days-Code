// Q62: Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements of array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array in-place
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Display reversed array
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
