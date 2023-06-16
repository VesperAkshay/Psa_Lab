#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int size, int k)
{
    // Sort first k elements in ascending order using bubble sort
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }

    // Sort remaining elements in descending order using bubble sort
    for (int i = k; i < size - 1; i++)
    {
        for (int j = k; j < size - i - 1 + k; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
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
    int arr[] = {9, 7, 5, 2, 4, 1, 8, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    printf("Original Array: ");
    printArray(arr, size);

    sortArray(arr, size, k);

    printf("Sorted Array: ");
    printArray(arr, size);

    return 0;
}
