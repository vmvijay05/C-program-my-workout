// IMPLEMENTING QUEUE IN ARRAY

#include <stdio.h>
#include <stdlib.h>
#define max 10

int queue[max];
int front = 0, rear = 0;

//QUEUE OVERFLOW
int qfull()
{
    if(rear==max-1)
    {
        printf("Queue is full\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

//QUEUE UNDERFLOW
int qempty()
{
    if(front==-1 || front>rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// INSERT FUNCTION
void enqueue()
{
    if (rear == max)
    {
        printf("\nQUEUE OVERFLOW");
    }
    else
    {
        printf("\nEnter the number : ");
        scanf("%d", &queue[rear]);
        rear++;
    }
}

//  DISPLAY FUNCTION
void display()
{
    if (rear == front)
    {
        printf("\nQUEUE IS EMPTY");
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            printf("\t%d", queue[i]);
        }
    }
}

// DELETE FUNCTION
void dequeue()
{
    if (front == rear)
    {
        printf("\nQUEUE UNDERFLOW");
        front = rear = 0;
    }
    else
    {
        printf("\nThe delete element in the queue is : %d", queue[front]);
        queue[front] = 0;
        front++;
    }
}

/* //PEEK FUNCTION
void peek()
{
    if (front == rear)
    {
        printf("\nQUEUE IS EMPTY");
    }
    else
    {
        printf("\nThe Peek element in the queue is : %d", queue[front]);
    }
}*/

// MAIN FUNCTION
void main()
{
    int choice;
    while (1)
    {
        printf("\nQUEUE OPERATIONS\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid\n");
            break;
        }
    }
}