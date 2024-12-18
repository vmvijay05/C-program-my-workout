/*  2. Write a program in C to demonstrate how to handle pointers in a program.
	    Expected Output :
	
		Address of m : 0x7ffcc3ad291c
		Value of m : 29                                                                                              
																													
		Now ab is assigned with the address of m.                                                                    
		Address of pointer ab : 0x7ffcc3ad291c                                                                       
		Content of pointer ab : 29                                                                                   
																													
		The value of m assigned to 34 now.                                                                           
		Address of pointer ab : 0x7ffcc3ad291c                                                                       
		Content of pointer ab : 34                                                                                   
																													
		The pointer variable ab is assigned with the value 7 now.                                                    
		Address of m : 0x7ffcc3ad291c                                                                                
		Value of m : 7                  */

#include<stdio.h>
void main()
{
    int m=29;
    int *ab=&m;

    printf("The m value is %d\n",m);
    printf("The address of m is %p\n",ab); /*or printf("The address of m is %p\n",&m); */

    m=34;
    printf("The address of m or pointer ab is %p\n",ab);
    printf("Now the m value is %d\n",m);
    
    *ab=7;
    printf("The address of m or pointer ab is %p\n",ab);
    printf("Now the m value is %d\n",m);
}

/*Output:

The m value is 29
The address of m is 0061FF18
The address of m or pointer ab is 0061FF18
Now the m value is 34
The address of m or pointer ab is 0061FF18
Now the m value is 7                              */