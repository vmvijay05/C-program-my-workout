/*5. Write a program in C to add numbers using call by reference.
        Test Data :
        Input the first number : 5
        Input the second number : 6
        Expected Output :

        The sum of 5 and 6  is 11*/

#include <stdio.h>
int add(int *a, int *b)
{
    int result;
    result = *a + *b;
    return result;
}
void main()
{
    int a, b, result;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter the two integers: ");
    scanf("%d %d", ptr1, ptr2);
    result = add(&a, &b);
    printf("Sum of two numbers is: %d\n", result);
}

/* Output:

Enter the two integers: 43
53
Sum of two numbers is: 96        */