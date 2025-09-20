// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements of array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
            found = 1;
            break;  // Stop searching once found
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
