/* 53. Write a C program to find the factorial of a given number without using loop and with using goto statement.
	  Expected output:
		Enter the number to find factorial: 5
		Factorial of 5 is: 120*/

        #include<stdio.h>
        void main(){
int n,i,total=1;
printf("Enter the number to find factorial: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    total=total*i;
}
printf("Factorial of %d is: %d", n,total);

}
