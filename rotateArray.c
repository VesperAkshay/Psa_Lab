#include <stdio.h>

void createArray(int arr[], int size)
{
    if (size <= 0)
        return;
    
    createArray(arr, size - 1);
    arr[size - 1] = size;
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
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    createArray(arr, size);
    printf("The array is: ");
    printArray(arr, size);

    return 0;
}
