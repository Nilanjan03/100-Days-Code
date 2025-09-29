// Q79: Perform diagonal traversal of a matrix.


#include <stdio.h>

void diagonalTraversal(int n, int m, int arr[n][m]) {
    // total diagonals = n + m - 1
    for (int d = 0; d < n + m - 1; d++) {
        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;

        while (row < n && col >= 0) {
            printf("%d ", arr[row][col]);
            row++;
            col--;
        }
        printf("\n"); // new line after each diagonal
    }
}

int main() {
    int n, m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    printf("\nDiagonal Traversal:\n");
    diagonalTraversal(n, m, arr);

    return 0;
}