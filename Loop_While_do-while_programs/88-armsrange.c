/* 88. Write a C program to find the Armstrong number for a given range of number.
		Test Data :
		Input starting number of range: 1
		Input ending number of range : 1000
		Expected Output :
		Armstrong numbers in given range are: 1 153 370 371 407   */

#include<stdio.h>
void main()
{
int i,n,mx,mn,sum;

printf("Enter the starting and ending numbers: ");
scanf("%d \t%d", &mn,&mx);

for(i=mn;i<=mx;i++)
{
    sum=i*i*i;

if(sum==i)
{
    printf("Armstrong numbers in given range are : %d ", i);
}
}
}