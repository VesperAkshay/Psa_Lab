#include <stdio.h>
#define MAX_SIZE 10

struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

// Function to add an element to the queue
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full, cannot enqueue.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->rear++;
    queue->items[queue->rear] = item;
    printf("%d enqueued to the queue.\n", item);
}

// Function to remove an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot dequeue.\n");
        return -1;
    }
    int item = queue->items[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }
    return item;
}

// Function to display the elements in the queue
void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue are: ");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->items[i]);
    }
    printf("\n");
}

int main() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);

    display(queue);

    int removedElement = dequeue(queue);
    printf("Dequeued element: %d\n", removedElement);

    display(queue);

    return 0;
}
