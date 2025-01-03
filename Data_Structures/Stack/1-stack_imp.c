// Stack implementation c code for push, pop and peek

#include <stdio.h>
#include <stdlib.h>
#define capacity 3

int arr[capacity];
int top = -1;

int isFull()
{
    if (top == capacity - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if (isFull() == 1)
    {
        printf("Overflow Error: Stack is already full.\n");
    }
    else
    {
        top++;
        arr[top] = data;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    if (isEmpty() == 1)
    {
        printf("Underflow Error. Stack is empty.\n");
        return -1;
    }
    else
    {
        top--;
        return arr[top + 1];
    }
}

int peek()
{
    if (isEmpty() == 1)
    {
        printf("The stack is empty.\n");
        return -1;
    }
    else
    {
        return arr[top];
    }
}

void stackprint()
{
    int i;
    if (isEmpty() == 1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
void main()
{
    int option, data;

    while (1)
    {
        printf("\nStack Implementation.\n1). Push\n2). Pop\n3). Peek\n4). Printstack\n5). Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter the element to be pushed:");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            printf("Element popped:%d\n", pop());
            break;
        case 3:
            printf("Element at top: %d\n", peek());
            break;
        case 4:
            stackprint();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}