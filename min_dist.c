#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minDistance(int arr[], int size, int num1, int num2)
{
    int minDist = INT_MAX;
    int prevIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num1 || arr[i] == num2)
        {
            if (prevIndex != -1 && arr[i] != arr[prevIndex])
            {
                int currentDist = i - prevIndex;
                if (currentDist < minDist)
                    minDist = currentDist;
            }
            prevIndex = i;
        }
    }

    return minDist;
}

int main()
{
    int arr[] = {4, 7, 3, 9, 5, 7, 6, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num1 = 2;
    int num2 = 7;

    int distance = minDistance(arr, size, num1, num2);

    printf("Minimum distance between %d and %d is %d\n", num1, num2, distance);

    return 0;
}
