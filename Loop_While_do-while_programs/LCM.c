/*  Write a program in C to find the LCM of any two numbers.
		Test Data :
		Input 1st number for LCM: 15
		Input 2nd number for LCM: 20
		Expected Output :
		The LCM of 15 and 20 is : 60    */

#include <stdio.h>
void main()
{
	int num1, num2, i, max, min, l, LCM;

	printf("Enter the two numbers: ");
	scanf("%d %d", &num1, &num2);

	max = (num1 > num2) ? num1 : num2;
	LCM = max;
	for (i = 1; i > 0; max += LCM)
	{
		if (max % num1 == 0 && max % num2 == 0)
		{
			LCM = max;
			break;
		}
	}
	printf("LCM=%d\n", LCM);
}


/* Output:
Enter the two numbers: 24
28
LCM=168            */