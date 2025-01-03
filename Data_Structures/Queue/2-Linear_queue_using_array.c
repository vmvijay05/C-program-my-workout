#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the queue

// Structure to represent a queue
struct Queue {
    int arr[MAX];
    int front;
    int rear;
};

// Function to initialize the queue
void initializeQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is full
int isFull(struct Queue* q) {
    if (q->rear == MAX - 1) {
        return 1; // Queue is full
    }
    return 0;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* q) {
    if (q->front == -1 || q->front > q->rear) {
        return 1; // Queue is empty
    }
    return 0;
}

// Function to enqueue an element (insert)
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue %d.\n", value);
    } else {
        if (q->front == -1) {
            q->front = 0; // Set front to 0 when the first element is added
        }
        q->rear++;
        q->arr[q->rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Function to dequeue an element (remove)
int dequeue(struct Queue* q) {
    int value;
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1; // Queue is empty
    } else {
        value = q->arr[q->front];
        q->front++;
        return value;
    }
}

// Function to display the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    initializeQueue(&q);

    int choice, value;

    // Menu-driven program to interact with the queue
    do {
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                value = dequeue(&q);
                if (value != -1) {
                    printf("Dequeued %d\n", value);
                }
                break;
            case 3:
                display(&q);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
