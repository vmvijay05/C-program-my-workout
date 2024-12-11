// 55. Write a C program to check whether given number is prime number or not using goto statement

#include <stdio.h>
void main()
{
    int num, i = 2;
    int flag = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("The given number is not a prime number");
            flag = 0;
            break;
        }
    }
    if (flag = 1)
        printf("The given number is prime number");
}
