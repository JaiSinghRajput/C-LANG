// code by jai visit @github:jaisinghrajput for more
#include <stdio.h>
#include <conio.h>

void main() {
    int R1, C1, R2, C2;

    // Input for matrix 1
    printf("Enter number of rows for matrix 1: ");
    scanf("%d", &R1);
    printf("Enter number of columns for matrix 1: ");
    scanf("%d", &C1);

    // Input for matrix 2
    printf("Enter number of rows for matrix 2: ");
    scanf("%d", &R2);
    printf("Enter number of columns for matrix 2: ");
    scanf("%d", &C2);

    if (C1 != R2) {
        printf("Matrix multiplication not possible. Number of columns in matrix 1 must be equal to the number of rows in matrix 2.\n");
        return;
    }

    int A[R1][C1], B[R2][C2], result[R1][C2], i, j, k;

    printf("Enter values for matrix 1:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C1; j++)
            scanf("%d", &A[i][j]);
    }

    printf("Enter values for matrix 2:\n");
    for (i = 0; i < R2; i++) {
        for (j = 0; j < C2; j++)
            scanf("%d", &B[i][j]);
    }

    // Matrix multiplication
    printf("Result of matrix multiplication:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            result[i][j] = 0;
            for (k = 0; k < C1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
