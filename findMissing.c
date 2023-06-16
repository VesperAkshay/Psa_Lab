#include<stdio.h>

int findMissingNumberSum(int arr[],int size){
    int expectedSum = (size+1)*(size+2)/2;

    int actualSum = 0;
    for (int i = 0; i < size; i++)
    {
        actualSum +=arr[i];
    }

    int missingNumbers = expectedSum - actualSum;

    return missingNumbers;
    
}

int findMissingNumberHash(int arr[],int size){
    int hash[size+1];

    for (int i = 0; i <= size; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] = 1;
    }

    int missingNumber = -1;

    for (int i = 0; i <= size; i++)
    {
        if(hash[i]==0){
            missingNumber = i;
            break;
        }
    }
    return missingNumber;  
    
}

int findMissingNumberXOR(int arr[],int size){
    int xorSum = 0;

    for (int i = 0; i < size; i++)
    {
        xorSum ^= arr[i];
    }

    for (int i = 0; i <= size; i++)
    {
        xorSum ^= i;
    }

    return xorSum;  
}

int main(){
    int arr[100],size,choice;
    int missingNumber;

    printf("Enter the number of elements in an array:");
    scanf("%d",&size);

    printf("Enter the element of the array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n----- Menu -----\n");
    printf("1. Find missing number using summation method\n");
    printf("2. Find missing number using hash method\n");
    printf("3. Find missing number using XOR method\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        missingNumber = findMissingNumberSum(arr,size);
        break;
    case 2:
        missingNumber = findMissingNumberHash(arr,size);
        break;
    case 3:
        missingNumber = findMissingNumberXOR(arr,size);
        break;
    
    default:
        printf("Invalid Choice\n");
        return 0;
    }

    if(missingNumber !=-1){
        printf("Missing Number is:%d\n",missingNumber);
    }
    else{
        printf("No missing Number found");
    }
    

    return 0;
}