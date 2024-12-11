/*	2. Write a program in C to find the square of any number using the function.
		Test Data :
		Input any number for square : 20
		Expected Output :

		The square of 20 is : 400.00     */

// With Argument Without Return:
#include <stdio.h>
void squre(int);

void main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	squre(a);
}

void squre(int a)
{
	int total;
	total = a * a;
	printf("The Squre of %d is: %d", a, total);
}

/*Output:
Enter the number: 5
The Squre of 5 is: 25      */
