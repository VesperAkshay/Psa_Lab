#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortInWave(int arr[], int size)
{
    
    for (int i = 0; i < size; i += 2)
    {
        if (i > 0 && arr[i] < arr[i - 1])
            swap(&arr[i], &arr[i - 1]);

        if (i < size - 1 && arr[i] < arr[i + 1])
            swap(&arr[i], &arr[i + 1]);
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
    int arr[] = {3, 1, 4, 6, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    sortInWave(arr, size);

    printf("Waveform sorted array: ");
    printArray(arr, size);

    return 0;
}
