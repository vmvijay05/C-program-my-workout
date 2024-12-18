//Write a C program to check whether a number is a palindrome or not

#include<stdio.h>
void main()
{
    int num,given,i,k,m,j;

    printf("Input a number: ");
    scanf("%d", &num);

given=num;
    while(given!=0) 
    {
        i=given%10;
        k=(k*10)+i;
       given=given/10;
    }
    
if(num==k)
{
    printf("\nThe given number is palindrome.\n");
}
else
printf("\nThe given number is not palindrome.\n");
}

