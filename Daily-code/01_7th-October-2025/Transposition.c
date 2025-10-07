// Method 1

#include <stdio.h>

int main() {

    int matrixA[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };

    int rows = sizeof(matrixA) / sizeof(matrixA[0]);
    int columns = sizeof(matrixA[0]) / sizeof(matrixA[0][0]);

    int matrixB[columns][rows];


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            matrixB[j][i] = matrixA[i][j];
        }
    }

    int new_rows = sizeof(matrixB) / sizeof(matrixB[0]);
    int new_columns = sizeof(matrixB[0]) / sizeof(matrixB[0][0]);

    for(int k = 0; k < new_rows; k++) {
        for(int l = 0; l <new_columns; l++) {
            printf("%d ", matrixB[k][l]);
        }

        printf("\n");
    }

    return 0;
}

// Method-2

#include <stdio.h>

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(j > i) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    for(int k = 0; k < rows; k++) {
        for(int l = 0; l < columns; l++){
            printf("%d ", matrix[k][l]);
        }

        printf("\n");
    }

    return 0;
}
