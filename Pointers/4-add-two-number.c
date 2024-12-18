/* 4. Write a program in C to add two numbers using pointers.

        Test Data :
        Input the first number : 5
        Input the second number : 6
        Expected Output :

        The sum of the entered numbers is : 11  */

#include <stdio.h>
void main()
{
    int a, b, result;
    int *a_ptr = &a, *b_ptr = &b;

    printf("Enter the two integer values: ");
    scanf("%d %d", a_ptr, b_ptr);
    
    //printf("%d and %d\n",*a_ptr,*b_ptr);
    result = *a_ptr + *b_ptr;
    printf("The sum of the entered numbers is:%d\n", result);
}

/*Output:

Enter the two integer values: 6 7
The sum of the entered numbers is:13*/