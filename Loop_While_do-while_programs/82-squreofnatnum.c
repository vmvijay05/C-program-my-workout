/* Write a C program that displays the n terms of square natural numbers and their sum.
		1 4 9 16 ... n Terms
		Test Data :
		Input the number of terms : 5
		Expected Output :
		The square natural upto 5 terms are :1 4 9 16 25
		The Sum of Square Natural Number upto 5 terms = 55*/

#include<stdio.h>
void main()
{
int i,j,n,sum=0;

printf("Enter the no.of terms: ");
scanf("%d", &n);

for(i=1;i<=n;i++)
{
printf("%d ",j=i*i);
sum=sum+j;
}
printf("The sum is: %d\n", sum);

}

/*Output:
Enter the no.of terms: 5
1 4 9 16 25 The sum is: 55  */