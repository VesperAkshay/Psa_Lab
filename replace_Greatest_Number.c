#include <stdio.h>

void replaceWithGreatest(int arr[], int size)
{
    int max = arr[size - 1];
    arr[size - 1] = -1;

    for (int i = size - 2; i >= 0; i--)
    {
        int current = arr[i];
        arr[i] = max;
        
        if (current > max)
            max = current;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 8, 4, 1, 2, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, size);

    replaceWithGreatest(arr, size);

    printf("Modified Array: ");
    printArray(arr, size);

    return 0;
}
