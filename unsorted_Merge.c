#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[])
{
    int i, j, k;
    i = j = k = 0;

    
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
            mergedArray[k++] = arr1[i++];
        else
            mergedArray[k++] = arr2[j++];
    }

    
    while (i < size1)
        mergedArray[k++] = arr1[i++];

    
    while (j < size2)
        mergedArray[k++] = arr2[j++];
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
    int arr1[] = {5, 9, 1, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {8, 4, 2, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2];

    printf("Array 1: ");
    printArray(arr1, size1);

    printf("Array 2: ");
    printArray(arr2, size2);

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged Array: ");
    printArray(mergedArray, size1 + size2);

    return 0;
}
