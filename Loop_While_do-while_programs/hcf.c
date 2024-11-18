/*  Write a C program to find the HCF (Highest Common Factor) of two numbers.
        Test Data :
        Input 1st number for HCF: 24
        Input 2nd number for HCF: 28
        Expected Output :
        HCF of 24 and 28 is : 4   */

#include <stdio.h>
void main()
{
    int i, x, y, j, m,a, b,HCF;

    printf("Enter the 1st HCF and 2nd HCF numbers: ");
    scanf("%d %d", &x, &y);

    // To find a lowerst value for execute a loop
    if (x < y)
    {
        a = x;

        j = 1;
        while (j<=a)  
        {
            if (a % j == 0 && y % j == 0)
            {
                m = j;
            }
            j++;
        }
        
            printf("HCF = %d\n",m);
    }

    else
    {
         b = y;

        j = 1;
        while (j<=b)  
        {
            if (a % j == 0 && y % j == 0)
            {
                m = j;
            }
            j++;
        }
        
            printf("\nHCF = %d\n",m);
    }
}


/* Output:  
Enter the 1st HCF and 2nd HCF numbers: 6  12
HCF = 6    */
