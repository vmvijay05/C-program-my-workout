//Without Argument With Return

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
		float a=86, b=99, c=66,average;
		average =(a+b+c) / 3;
		return average;
	}