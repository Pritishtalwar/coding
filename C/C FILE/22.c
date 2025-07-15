#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible! Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    int matrix1[m][n], matrix2[p][q], result[m][q];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    
    printf("Resulting matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}