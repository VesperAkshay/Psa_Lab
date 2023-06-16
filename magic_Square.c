#include <stdio.h>
#include <stdlib.h>

void generateMagicSquare(int n)
{
    int square[n][n];
    int num = 1;
    int row = 0, col = n / 2;

    // Initialize all elements of the square to 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            square[i][j] = 0;
        }
    }

    while (num <= n * n)
    {
        square[row][col] = num;
        num++;

        // Move diagonally up and to the right
        row--;
        col++;

        // Wrap around if row goes above the square or col goes outside the square
        if (row < 0)
            row = n - 1;
        if (col == n)
            col = 0;

        // If the current position is already filled, move vertically down
        if (square[row][col] != 0)
        {
            row++;
            col--;

            // Wrap around if row goes outside the square
            if (row == n)
                row = 0;
        }
    }

    // Print the magic square
    printf("Magic Square of size %d:\n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", square[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the order of the magic square (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Invalid input. Please enter an odd number.\n");
        return 0;
    }

    generateMagicSquare(n);

    return 0;
}
