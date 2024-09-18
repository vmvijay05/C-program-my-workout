/* 51. Write a C program to print first 20 natural numbers and their sum using goto statement:
Expected output:
	
Natural numbers are: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
        	Sum is: 210*/

#include<stdio.h>
void main(){
int sum=0,i;

printf("Natural numbers are: \n");
for(i=1;i<=20;i++)
{
printf("%d\n", i);
sum=sum+i;
}
printf("Total sum is: %d", sum);

}

