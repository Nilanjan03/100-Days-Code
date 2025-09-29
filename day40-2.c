// Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int n1, m1, n2, m2;
    
    // Input matrix sizes
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &n1, &m1);
    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &n2, &m2);

    // Check multiplication condition
    if (m1 != n2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[n1][m1], B[n2][m2], C[n1][m2];

    // Input first matrix
    printf("Enter first matrix:\n");
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
            scanf("%d", &A[i][j]);

    // Input second matrix
    printf("Enter second matrix:\n");
    for (int i = 0; i < n2; i++)
        for (int j = 0; j < m2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix with 0
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m2; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < m1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
