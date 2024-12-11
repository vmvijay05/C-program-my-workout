//Without Argument With Return
//Find Average:

#include<stdio.h>
	float avg();
	void main()
	{
		float a;
		printf(" before function calling\n");
		a=avg(); 
		printf(" average value is %f\n",a);
		printf(" after function calling\n");
	}
	float avg()
	{
		float a=12, b=15, c=18,average;
		average =(a+b+c) / 3;
		return average;
	}

	/*Output:
	before function calling
 average value is 15.000000
 after function calling              */