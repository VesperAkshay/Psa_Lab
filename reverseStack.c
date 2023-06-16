#include <stdio.h>
#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack is full, cannot push.\n");
        return;
    }
    stack->items[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot pop.\n");
        return -1;
    }
    return stack->items[stack->top--];
}

// Function to reverse an array using a stack
void reverseArray(int arr[], int size) {
    struct Stack stack;
    initialize(&stack);

    // Push elements of the array onto the stack
    for (int i = 0; i < size; i++) {
        push(&stack, arr[i]);
    }

    // Pop elements from the stack and store them back in the array
    for (int i = 0; i < size; i++) {
        arr[i] = pop(&stack);
    }
}

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);
    displayArray(arr, size);

    return 0;
}
