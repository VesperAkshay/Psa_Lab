#include<stdio.h>

int findFirst(int arr[],int size,int target){
    int first = 1;
    int left = 0;
    int right = size-1;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
            first = mid;
            right = mid-1;
        }
        else if(arr[mid<target]){
            left = mid+1;
        }
        else{
            right = mid-1;
        }

    }
    return first;
}
int findLast(int arr[],int size,int target){
    int last = -1;
    int left = 0;
    int right = size -1;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
            last = mid;
            left = mid+1;
        }
        else if(arr[mid]<target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return last;
}
int main() {
    int arr[] = {2, 5, 8, 12, 16, 16, 16, 23, 38, 56, 72, 91};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 16;  

    
    int firstOccurrence = findFirst(arr, size, target);

    
    int lastOccurrence = findLast(arr, size, target);

    if (firstOccurrence != -1 && lastOccurrence != -1)
        printf("First occurrence at index %d\nLast occurrence at index %d\n", firstOccurrence, lastOccurrence);
    else
        printf("Element not found\n");

    return 0;
}