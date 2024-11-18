/* 81. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. (to use for loop)
		Test Data :
		Input the number or terms :5
		Expected Output :
		9 99 999 9999 99999
		The sum of the saries = 111105 */

#include <stdio.h>
void main()
{
	int i, n, sum, result = 9, v;

	printf("Enter the no.of terms: ");
	scanf("%d", &n);

	// if(n!=0){
	for (i = 1; i <= n; i++)
	{
		sum = sum + result;
		printf("%d ", result);
		result = (result * 10) + 9;
	}
	printf("\nThe total sum is : %d\n", sum);
}


/*Output: 
Enter the no.of terms: 5
9 99 999 9999 99999 
The total sum is : 111105*/