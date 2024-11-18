/* write a C program to find the LCM of any two numbers using HCF.
        Test Data :
        Input 1st number for LCM: 15
        Input 2nd number for LCM: 20
        Expected Output :
        The LCM of 15 and 20 is : 60

    Formula:  LCM*HCF=num1*num2
              LCM=(num1*num2)/HCF       */


#include<stdio.h>
void main()
{
    int HCF,LCM,min,max,i,a,b,x,y,j,z;

    printf("Enter the two numbers: ");
    scanf("%d %d", &x,&y);

// To find a lowerst value for execute a loop
    if (x < y)
    {
        a = x;

        j = 1;
        while (j<=a)  
        {
            if (a % j == 0 && y % j == 0)
            {
                HCF = j;
            }
            j++;
        }
        
            printf("HCF = %d\n",HCF);
    
    }

    else
    {
         b = y;

        j = 1;
        while (j<=b)  
        {
            if (a % j == 0 && y % j == 0)
            {
                HCF = j;
            }
            j++;
        }
        
            printf("\nHCF = %d\n",HCF);
    }

//HCF=4;
    LCM=(x*y)/HCF;
    printf("LCM = %d",LCM);
}


/* Output:

Enter the two numbers: 24
28
HCF = 4
LCM = 168     */
