#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int res[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    printf("Resultant Matrix:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
