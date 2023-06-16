#include<stdio.h>
int main (){
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers)/sizeof(int);
    int sum = 0;

    for(int i = 0;i<size;i++){
        sum +=numbers[i];
    }
    printf("Sum of array=%d\n",sum);

    return 0;
}