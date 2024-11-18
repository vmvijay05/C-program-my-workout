/*   Write a C program to find the sum of the G.P. series.
        Test Data :
        Input the first number of the G.P. series: 3
        Input the number or terms in the G.P. series: 5
        Input the common ratio of G.P. series: 2
        Expected Output :
        The numbers for the G.P. series:
        3.000000 6.000000 12.000000 24.000000 48.000000
        The Sum of the G.P. series : 93.000000            */

#include <stdio.h>
void main()
{
    int num, n, diff, i, mul, total = 0;

    printf("Enter the starting number: ");
    scanf("%d", &num);

    printf("Enter the no.of items: ");
    scanf("%d", &n);

    printf("Enter the common difference value: ");
    scanf("%d", &diff);

    printf("The Sum of the A.P. series are : %d ", num);

    for (i = 1; i < n-1; i++)
    {
     
         if(i<n)
        {
            printf("+ ");
        }
        
        if (i == 1)
        {
            
            mul = num * diff;
            printf("%d ", mul);

             if(i<n)
        {
            printf("+ ");
        }
            total = total + mul;
        }

        mul = mul * diff;

        printf("%d ", mul);

        total = total + mul;
    }

    printf("\nThe sum is: %d\n", total + num);
}