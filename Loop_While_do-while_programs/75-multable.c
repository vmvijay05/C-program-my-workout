/* 75. Write a C program to display the multiplication table for a given integer. (to use for loop)
        Test Data :
        Input the number (Table to be calculated) : 15
        Expected Output :
        15 X 1 = 15
        ...
        ...
        15 X 10 = 150*/

#include <stdio.h>
void main()
{
    int i, n, mul = 0;
    printf("Input the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d x %d = %d \n", n, i, mul = n * i);
    }
}
