/* 7. Write a program in C to check whether a number is a prime number or not using the function.
        Test Data :
        Input a positive number : 5
        Expected Output :
        The number 5 is a prime number.       */

// Without Argument With Return
#include <stdio.h>
int prime()
{
    int num, i = 2;
    int flag = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

void main()
{
    int result;
    result = prime();
    if (result == 1)
    {
        printf("The given number is prime number");
    }
    else
        printf("The given number is not a prime number");
}

/*Output:
Enter the number: 61
The given number is prime number       */
