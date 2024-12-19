/*11. Write a program in C to swap elements using call by reference.
		Test Data :
		Input the value of 1st element : 5
		Input the value of 2nd element : 6
		Input the value of 3rd element : 7
		Expected Output :
	
		The value before swapping are :                                                                              
		element 1 = 5                                                                                                
		element 2 = 6                                                                                                
		element 3 = 7                                                                                                
																													
		The value after swapping are :                                                                               
		element 1 = 7                                                                                                
		element 2 = 5                                                                                                
		element 3 = 6 */

// Function that swaps two integers using call by reference

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Passing the addresses of 'a' and 'b'
    printf("After swapping: a = %d, b = %d\n", a, b);
}

/*Output:

Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10        */