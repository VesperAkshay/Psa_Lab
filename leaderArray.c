#include <stdio.h>
#define MAX_SIZE 100

void findLeadersStack(int arr[], int size) {
    int stack[MAX_SIZE];  
    int top = -1;         

    for (int i = size - 1; i >= 0; i--) {
        
        if (top == -1 || arr[i] > stack[top]) {
            stack[++top] = arr[i];
        }
    }

    
    printf("Leaders in the array (Stack Method): ");
    while (top != -1) {
        printf("%d ", stack[top--]);
    }
    printf("\n");
}

void findLeadersTraversal(int arr[], int size) {
    int currentLeader = arr[size - 1];

    
    printf("Leaders in the array (Traversal Method): %d ", currentLeader);

    
    for (int i = size - 2; i >= 0; i--) {
        
        if (arr[i] > currentLeader) {
            currentLeader = arr[i];
            printf("%d ", currentLeader);
        }
    }
    printf("\n");
}

void findLeadersComparison(int arr[], int size) {
    printf("Leaders in the array (Comparison Method): ");

    
    int currentLeader = arr[size - 1];

    
    printf("%d ", currentLeader);

    
    for (int i = size - 2; i >= 0; i--) {
        
        if (arr[i] > currentLeader) {
            currentLeader = arr[i];
            printf("%d ", currentLeader);
        }
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE], size, choice;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n----- Menu -----\n");
    printf("1. Find leaders using stack method\n");
    printf("2. Find leaders using traversal method\n");
    printf("3. Find leaders using comparison method\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            findLeadersStack(arr, size);
            break;
        case 2:
            findLeadersTraversal(arr, size);
            break;
        case 3:
            findLeadersComparison(arr, size);
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    return 0;
}
