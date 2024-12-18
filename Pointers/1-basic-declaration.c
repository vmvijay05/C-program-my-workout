/*  1. Write a program in C to show the basic declaration of a pointer.
		Expected Output :
	
		Pointer : Show the basic declaration of pointer :                                                            
		-------------------------------------------------------                                                       
		Here is m=10, n and o are two integer variable and *z is an integer                                          
																													
		z stores the address of m  = 0x7ffd40630d44                                                                  
																													
		*z stores the value of m = 10                                                                                
																													
		&m is the address of m = 0x7ffd40630d44                                                                      
																													
		&n stores the address of n = 0x7ffd40630d48                                                                  
																													
		&o  stores the address of o = 0x7ffd40630d4c                                                                 
																													
		&z stores the address of z = 0x7ffd40630d50     */

#include <stdio.h>
void main()
{
int m = 5,x;
int *pointer=&m;

printf("The value of m=%d\n",m);
printf("The address of m is %p\n",&m);
printf("The address of x is %p\n",&x);
printf("The value of pointer is %p\n", pointer);
*pointer=25;
printf("After changing the *pointer value the *pointer is %d\n", *pointer);
printf("The value of m=%d\n",m);
}

/*Output:

The value of m=5
The address of m is 0061FF18
The address of x is 0061FF14
The value of pointer is 0061FF18
After changing the *pointer value the *pointer is 25
The value of m=25          */