#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int first[m][n], second[p][q], result[m][q];

    // Input first matrix
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Initialize the result matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    ret
