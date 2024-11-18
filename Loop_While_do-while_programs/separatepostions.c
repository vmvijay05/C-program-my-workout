// Write a c program to sepearate odd and even positions from given number.


#include <stdio.h>

void main() {
    int num,digit,rem,i,a,b,odd=0,even=0,given,mod,count,r,val=1,val1=1;
    printf("Enter the input number: ");
    scanf("%d",&num);
    
    given=num;
    digit=0;
    while(given!=0)
    {
        rem=given%10;
        given=given/10;
        digit++;
    }

    given=num;
            count=digit;
    for(i=1;i<=digit;i++)
    {
        if(count%2==0)
        {
            mod=given%10;
            a=mod;
            even=even + (val*a);  // This line is digits set to forward
            val *= 10;

        }
        
        else
        {
            mod=given%10;
            b=mod;
            odd=odd+(val1*b); // This line is digits set to forward
            val1*=10;

        }
        count=count-1;
        given=given/10;
        
    }
    printf("\neven=%d",even);
    printf("\nodd=%d",odd);

}

/*  Output:

Enter the input number: 648263

even=423
odd=686              */