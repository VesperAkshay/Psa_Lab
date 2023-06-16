#include <stdio.h>

int findMissingNumber(int square[][10], int n)
{
    int totalSum = (n * n + 1) / 2 * n * n;
    int sum = 0;

    // Calculate the sum of numbers in the magic square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += square[i][j];
        }
    }

    // Calculate and return the missing number
    return totalSum - sum;
}

int main()
{
    int square[10][10];
    int n;

    printf("Enter the order of the magic square: ");
    scanf("%d", &n);

    printf("Enter the elements of the magic square:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &square[i][j]);
        }
    }

    int missingNumber = findMissingNumber(square, n);

    printf("Missing Number in the magic square: %d\n", missingNumber);

    return 0;
}
