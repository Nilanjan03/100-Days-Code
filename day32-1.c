// Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array
    int merged[n1 + n2];

    // Copy first array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    // Print merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
