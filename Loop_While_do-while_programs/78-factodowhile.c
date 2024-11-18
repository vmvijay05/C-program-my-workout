// Write a C program to calculate the factorial of a given number. (to use do while loop):

#include <stdio.h>
void main()
{
    int i, n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    i = 1;

    do{
        fact = fact * i;
        i++;
    }while (i <= n);
    printf("The factorial of %d is: %d.", n, fact);
}
