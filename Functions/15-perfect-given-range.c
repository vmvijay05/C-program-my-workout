/*	10. Write a program in C to print all perfect numbers in a given range using the function.
		Test Data :
		Input lowest search limit of perfect numbers : 1
		Input lowest search limit of perfect numbers : 100
		Expected Output :
		
		The perfect numbers between 1 to 100 are :                                      
		6   28       */


//Without Argument Without Return
#include<stdio.h>
int perfect();

void main()
{
        perfect();
}

int perfect()
{
     int i, n, r, sum, k, x, y, j,flag=0;
    printf("Enter the number: ");
    scanf("%d %d", &x, &y);
    // k=1;
    for (j = x; j <= y; j++)
    {
        sum=0;

        for (i = 1; i < j; i++)
            if (j % i == 0)
            {
                //   printf("%d ", i);
                sum = sum + i;
            }
        
        if(sum==j)
        {
            printf("%d \n",j);
            flag++;
        }
        
    }
    if(flag==0)
    {
        printf("There is no perfect numbers between the given range.\n");
    }
}

/*Output:

Enter the number: 1  50
6
28          */
