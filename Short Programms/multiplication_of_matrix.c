// here we are going to find the multiplication of two matrix  using 2-d array
// and return a new matrix which is the result


#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    // Input for Matrix 1
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &row1, &col1);

    int matrix1[row1][col1];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &row2, &col2);

    int matrix2[row2][col2];
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Checking if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Multiplication of matrices
    int result[row1][col2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying Resultant Matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
