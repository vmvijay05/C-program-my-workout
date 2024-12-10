// Without Argument and Without Return
// Multiplication of two numbers:

#include <stdio.h>

void mul()
{
    int x, y, multiply;
    printf("Enter the two values: ");
    scanf("%d%d", &x, &y);
    multiply = x * y;
    printf("The multiply of two numbers are: %d", multiply);
}

void main()
{
    mul();
}
