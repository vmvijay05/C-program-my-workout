//72. Write a C program to display n terms of natural numbers and their sum

#include<stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter the no.of natural numbers: ");
    scanf("%d", &n);
    do{
        printf("%d ", i);
        sum=sum+i;
        i++;

    } while(i<=n);
        printf("\n Sum of the first 10 natural numbers is: %d\n", sum);

}

