// DOUBLE LINKED LIST IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node node;
node *start, *head = 0;

//  COUNT NUMBER OF NODES IN THE LIST
int count()
{
    node *temp;
    int count = 0;
    temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

// CREATE FUNCTION
void create_list()
{
    node *new_node, *temp;
    int num;
    printf("\nEnter -1 to exit : ");
    printf("\nEnter the number : ");
    scanf("%d",&num);
    while (num != -1)
    {
        new_node = (node *)malloc(sizeof(node));
        new_node->data = num;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
            new_node->prev = NULL;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
            // temp = new_node;
        }
        printf("\nEnter the number : ");
        scanf("%d",&num);
    }
}

// DISPLAY FUNCTION
void display_list()
{
    node *temp;
    int n;
    temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty.");
    }
    else
    {
        // while (temp->next != NULL)
        // {
        //     printf("\t%d", temp->data);
        //     temp = temp->next;
        // }
        while (temp != NULL)
        {
            printf("\t%d", temp->data);
            temp = temp->next;
            // count++;
        }
    }
    n = count();
    printf("\nAvailable no of nodes are = %d\n",n);
}

// INSERT AT THE BEGINNGIN MULTIPLE ELEMENT 

void insert_begin()
{
    node *new_node,*temp;
    int n;
    printf("\nEnter number of element to be insert : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        new_node = (node*)malloc(sizeof(node));
        printf("\nEnter the number : ");
        scanf("%d",&(new_node->data));
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}


// INSERT SINGLE ELEMENT AT THE LAST 
void insert_last()
{
    node *new_node,*temp;
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node = (node*)malloc(sizeof(node));
    printf("\nEnter the number : ");
    scanf("%d",&(new_node->data));
    temp->next = new_node;
    new_node->prev = temp;
}

// DELETE SINGLE NODE AT THE LAST OF THE LIST
void delete_last_single()
{
    node *temp,*last;
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    last = temp->prev;
    last->next = NULL;
    free(temp);
}


// DELETE SINGLE NODE AT THE BEGINNING OF THE LIST
void delete_begin_single()
{
    node *temp;
    // temp = head;
    temp = head->next;
    free(head);
    temp->prev = 0;
    head = temp;
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nWelcome to double linked list...\n");
        printf("Select your choice\n");
        printf("1.Create a list\n");
        printf("2.Display the list\n");
        printf("3.Insert nodes at the beginnig in the double linked list.\n");
        printf("4.Insert nodes at the last position in the list\n");
        printf("5.Delete a node from the first position in the list\n");
        printf("6.Delete a node form the last position in the list\n");
        printf("7.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create_list();
            break;
        case 2:
            display_list();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_last();
        break;
        case 5:
            delete_begin();
        break;
        case 6:
            delete_last();
        break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nInvalid");
            break;
        }
    }
}