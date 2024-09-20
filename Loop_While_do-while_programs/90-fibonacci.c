/* 90. Write a program in C to display the first n terms of the Fibonacci series. 
		Fibonacci series 0 1 2 3 5 8 13 .....
		Test Data :
		Input number of terms to display : 10
		Expected Output :
		Here is the Fibonacci series upto to 10 terms :
		0 1 1 2 3 5 8 13 21 34  */

#include<stdio.h>
void main()
{
int i,n,k=0,l=1,m=0;

printf("Input no.of terms to display: ");
scanf("%d", &n);

printf("Here is the Fibonacci series upto to %d terms: ",n);
printf("%d ",k);

for(i=2;i<=n;i++)
{

k=l;
l=m;
m=k+l;
printf("%d ",m);

}

}


/* Output:

Input no.of terms to display: 10
Here is the Fibonacci series upto to 10 terms: 0 1 1 2 3 5 8 13 21 34     */