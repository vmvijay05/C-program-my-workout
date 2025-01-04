// LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

//CREATE FUNCTIONS
struct node *create(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end.");
    printf("\nEnter the data : ");
    scanf("%d",&num);
    while(num != -1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        if(new_node == NULL)
        {
            printf("\nMemory cannot allocated");
            return 0;
        }    
        new_node -> data = num;
        if(start == NULL)
        {
            start = new_node;
            new_node->next = NULL;
        }
        else
        {
            ptr=start;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\nEnter a data : ");
        scanf("%d",&num);
    }
    return start;
}

// DISPLAY FUNCTION
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}

// INSERT AT THE BEGINNING SINGLE ELEMENT
struct node *insertbegin(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("Enter the data : ");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("\nMemory cannot be allocated.");
        return start;
    }
    ptr=start;
    new_node->data = num;
    new_node->next = ptr;
    start = new_node;
}

//INSERT AT THE END
struct node *insertend(struct node *start)
{
    struct node *new_node,*ptr;
    ptr = start;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the number : ");
    scanf("%d",&(new_node->data));
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = NULL;
    return start;
}

int main()
{
    int option;

    do
    {
        printf("\n********Main Menu********\n");
        printf("1.Creat a list\n");
        printf("2.Display the list\n");
        printf("3.Insert at the beginning\n");
        printf("4.Insert at the end\n");
        printf("5.Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                start = create(start);
                printf("\nLinked list created.");
            break;
            case 2:
                start = display(start);
            break;
            case 3:
                start = insertbegin(start);
                printf("\nValue inserted at the beginning of the linked list.");
            break;
            case 4:
                start = insertend(start);
                printf("\nValue inserted at the end of the linked list.");
            break;
            default:
                printf("\nWrong Option");
            break;
        }
    }
    while(option != 5);
    return 0;
}