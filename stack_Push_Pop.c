#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initializeStack(Stack* stack)
{
    stack->top = -1;
}

int isFull(Stack* stack)
{
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(Stack* stack)
{
    return stack->top == -1;
}

void push(Stack* stack, int element)
{
    if (isFull(stack))
    {
        printf("Stack Overflow: Cannot push element %d. Stack is full.\n", element);
        return;
    }

    stack->data[++stack->top] = element;
    printf("Element %d pushed to the stack.\n", element);
}

int pop(Stack* stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow: Cannot pop element. Stack is empty.\n");
        return -1;
    }

    int element = stack->data[stack->top--];
    return element;
}

int main()
{
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));  

    return 0;
}
