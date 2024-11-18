//71. Write a C program to compute the sum of the first 10 natural numbers:

#include<stdio.h>
void main()
{
    int n=1,sum=0;
    do{
        printf("%i ", n);
        n++;
        sum=sum+n;
    } while(n<=10);
        printf("\n Sum of the first 10 natural numbers is: %d\n", sum);

}