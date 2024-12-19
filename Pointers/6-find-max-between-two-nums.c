/* 6. Write a program in C to find the maximum number between two numbers using a pointer.
        Test Data :
        Input the first number : 5
        Input the second number : 6
        Expected Output :
        6 is the maximum number. */
#include <stdio.h>
void main()
{
    int a, b, result;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter the two integers: ");
    scanf("%d %d", ptr1, ptr2);

    if (*ptr1 < *ptr2)
    {
        printf("The %d is maximum number\n", *ptr2);
    }
    else
    {
        printf("The %d is maximum number\n", *ptr1);
    }
}

/*Output:

Enter the two integers: 456
1245
The 1245 is maximum number       */