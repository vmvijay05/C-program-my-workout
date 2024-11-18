/* 77. Write a C program to display the n terms of odd natural numbers and their sum. (to use while loop)

Expected Output :
        The odd numbers are :1 3 5 7 9 11 13 15 17 19
        The Sum of odd Natural Number upto 10 terms : 100  */

#include <stdio.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("Enter the no.of terms: ");
    scanf("%d", &n);
    printf("The odd numbers are: ");
    while (i <= n)
    {
        printf("%d ", i * 2 - 1);
        sum = sum + i * 2 - 1;
        i++;
    }

    printf("The sum of the odd natural numbers: %d\n", sum);
}