/* 15. Write a C program to demonstrate how a function returns a pointer.
		Test Data :
		Input the first number : 5
		Input the second number : 6
		Expected Output :
		The number 6 is larger. */

#include <stdio.h>
int *findMax(int *num1, int *num2)
{
	if (*num1 > *num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

void main()
{
	int a, b;
	printf("Enter two integers:\n");
	scanf("%d %d", &a, &b);

	int *max = findMax(&a, &b);
	printf("The greater number is %d\n", *max);
}

/*Output:
Enter two integers:
53
64
The greater number is 64
*/
