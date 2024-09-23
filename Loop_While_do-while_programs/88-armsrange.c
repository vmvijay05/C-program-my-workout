/* 88. Write a C program to find the Armstrong number for a given range of number.
        Test Data :
        Input starting number of range: 1
        Input ending number of range : 1000
        Expected Output :
        Armstrong numbers in given range are: 1 2 3 4 5 6 7 8 9 153 370 371 407   */

#include <stdio.h>
void main()
{
    int i, k, n, max, min, sum, given, rem, j, mul;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &min, &max);

    for (k = min; k <= max; k++)
    {
        sum=0;
        // To find the count:
        given = k;
        i=0;
        while (given != 0)
        {
            given = given / 10;
            i++;
        }
       // printf("%d The Digit count is: %d\n", k, i);

        // To find the number is armstrong or not:

        given = k;
        while (given!= 0)
        {
            rem = given % 10;
            mul = 1;
            for (j = 1; j <= i; j++)
            {
                mul = mul * rem;
            }
           // printf("rem is: %d , mul = %d\n", rem, mul);
            given = given / 10;
            sum = sum + mul;
        }
       // printf("Sum=%d\n", sum);
        
        if (sum == k)
            printf("The armstrong numbers are: %d \n", sum);
    }
}   


/* Output: 

Enter the starting and ending numbers: 1
500
The armstrong numbers are: 1 
The armstrong numbers are: 2 
The armstrong numbers are: 3 
The armstrong numbers are: 4 
The armstrong numbers are: 5 
The armstrong numbers are: 6 
The armstrong numbers are: 7 
The armstrong numbers are: 8 
The armstrong numbers are: 9 
The armstrong numbers are: 153 
The armstrong numbers are: 370 
The armstrong numbers are: 371 
The armstrong numbers are: 407       */
