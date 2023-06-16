#include<stdio.h>

int findBitonicPoint(int arr[],int size){
    int left = 0;
    int right = size - 1;
    
    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
            left = mid+1;
        }
        else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]){
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 45, 30, 14};  
    int size = sizeof(arr) / sizeof(arr[0]);

    int bitonicPoint = findBitonicPoint(arr,size);

    if(bitonicPoint !=-1){
        printf("Bitonic point at index%d\n",bitonicPoint);
    }
    else{
        printf("Bitonic Point not found");
    }
    return 0;
}