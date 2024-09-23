/* Write a C program to find the sum of an A.P. series.
        Test Data :
        Input the starting number of the A.P. series: 1
        Input the number of items for the A.P. series: 10
        Input the common difference of A.P. series: 4
        Expected Output :
        The Sum of the A.P. series are :
        1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190  */

#include <stdio.h>
void main()
{
    int num, n, diff, i, sum, total = 0;

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
            
            sum = num + diff;
            printf("%d ", sum);

             if(i<n)
        {
            printf("+ ");
        }
            total = total + sum;
        }

        sum = sum + diff;

        printf("%d ", sum);

        total = total + sum;
    }

    printf("\nThe sum is: %d\n", total + num);
}

/* Output:
Enter the starting number: 5
Enter the no.of items: 5
Enter the common difference value: 3
The Sum of the A.P. series are : 5 + 8 + 11 + 14 + 17 
The sum is: 55     */