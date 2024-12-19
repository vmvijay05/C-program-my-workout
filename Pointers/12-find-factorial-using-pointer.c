/*  12. Write a program in C to find the factorial of a given number using pointers.
        Test Data :
        Input a number : 5
        Expected Output :

        The Factorial of 5 is : 120  */
#include <stdio.h>
void main()
{
    int num, fact = 1, i;
    int *ptr = &fact;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        *ptr = *ptr * i;
    }
    printf("The factorial of %d is %d", num, *ptr);
}

/*Output:
Enter the number: 8
The factorial of 8 is 40320  */