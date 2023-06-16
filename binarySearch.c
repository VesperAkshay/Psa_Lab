#include<stdio.h>

int binarySearch(int arr[],int left,int right, int target){
    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
        return mid;
        }
        if(arr[mid]<target){
        left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
    

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,21};
    int size = sizeof(arr)/sizeof(int);
    int target;
    printf("Enter a number to search = ");
    scanf("%d",&target);
    int result = binarySearch(arr,0,size-1,target);
    if(result==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index = %d\n",result);
    }
    return 0;
}