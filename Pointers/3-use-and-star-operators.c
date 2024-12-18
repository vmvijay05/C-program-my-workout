/*  3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
	Expected Output :

		Pointer : Demonstrate the use of & and * operator :
		--------------------------------------------------------
		m = 300
		fx = 300.600006
		cht = z

		Using & operator :
		-----------------------
		address of m = 0x7ffda2eeeec8
		address of fx = 0x7ffda2eeeecc
		address of cht = 0x7ffda2eeeec7

		Using & and * operator :
		-----------------------------
		value at address of m = 300
		value at address of fx = 300.600006
		value at address of cht = z

		Using only pointer variable :
		----------------------------------
		address of m = 0x7ffda2eeeec8
		address of fx = 0x7ffda2eeeecc
		address of cht = 0x7ffda2eeeec7

		Using only pointer operator :
		----------------------------------
		value at address of m = 300
		value at address of fx= 300.600006
		value at address of cht= z                 */

#include <stdio.h>
void main()
{
	int m = 300;
	int *int_ptr = &m;
	float fx = 300.600006;
	float *float_ptr = &fx;
	char cht = 'z';
	char *char_ptr = &cht;

	// Using & operator:
	printf("The address of m is %p\n", &m);
	printf("The address of fx is %p\n", &fx);
	printf("The address of cht is %p\n", &cht);

	// Using & and * operator:
	printf("\nThe value of m is %d\n", *int_ptr);
	printf("The value of fx is %f\n", *float_ptr);
	printf("The value of cht is %c\n", cht);

	// Using only pointer variable:
	printf("\nThe value of m is %p\n", int_ptr);
	printf("The value of fx is %p\n", float_ptr);
	printf("The value of cht is %p\n", char_ptr);

	// Using only pointer operator:
	printf("\nThe value of m is %d\n", *int_ptr);
	printf("The value of fx is %f\n", *float_ptr);
	printf("The value of cht is %c\n", *char_ptr);
}

/*Output:

The address of m is 0061FF10
The address of fx is 0061FF0C
The address of cht is 0061FF0B

The value of m is 300
The value of fx is 300.600006
The value of cht is z

The value of m is 0061FF10
The value of fx is 0061FF0C
The value of cht is 0061FF0B

The value of m is 300
The value of fx is 300.600006
The value of cht is z        */