//37. Write a C program to calculate profit and loss on a transaction
#include<stdio.h>
void main()
{
    float sp, cp, total;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if(sp>cp)
    {
        total = sp-cp;
        printf("The profit amount is: %f", total);
    }
    else if(cp>sp)
    {
        total = cp-sp;
        printf("Your investment is loss. The loss amount is: %f", total);
    }
    else
        printf("No profit and loss.");
}
