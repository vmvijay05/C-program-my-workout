/*   Write a C program to convert a binary number to octal. 
		Test Data :
		Input a binary number :1001
		Expected Output :
		The Binary Number : 1001
		The equivalent Octal Number : 11     */


#include <stdio.h>
void main()
{

	int num, n1, n, base, sum, i, j, k, mod, bin, digit=1, octal=0,octbase = 1;
	printf("Enter the binary number: ");
	scanf("%d", &num);

//To separate last three numbers:
	for (i = num; i > 0; i = i / 1000)
	{
		bin = i % 1000;

            //To find binary to decimal

            j=1;
            base=1;
            sum=0;
            for (k = bin; k > 0; k = k / 10)
	        {
		    mod = k % 10;

		        if (j == 1)
		        {
			    base = base * 1;
	        	}   
		        else
		    	base = base * 2;

		        sum = sum + (mod * base);
		        j = j + 1;
        	}
			printf("The decimal number is: %d\n", sum);
			octal = (octal )+ (sum * octbase);
			octbase *= 10;
	}
				printf("\nAnswer=%d\n",octal);

}


/*  Output:  

	Enter the binary number: 110101
The decimal number is: 5
The decimal number is: 6

Answer=65                  */