/*Write a C program to check whether a number is a Strong Number or not.
		Test Data :
		Input a number to check whether it is Strong number: 15
		Expected Output :
		15 is not a Strong number.   */

#include<stdio.h>
void main()
{
    int n,i,mod,sum,given,fact;

    printf("Enter the number: ");
    scanf("%d", &n);

    given=n;
    while(given!=0)
    {
        mod=given%10;
        fact=1;
        for(i=1;i<=mod;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        given=given/10;
        //given++;
    }
    if(sum==n){
    printf("The %d is strong number.", sum);
    }
    else
    printf("The given number is not strong number.");
}

/* Output:
Enter the number: 146
The given number is not strong number.
 
            or

Enter the number: 145
The 145 is strong number.     */