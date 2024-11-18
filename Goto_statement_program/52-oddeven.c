/* 52. Check whether given number is even or odd until this program run to click exit, using goto statement.
		Expected output:
	        Enter the number: 21 
		Entered number 21 is even*/
#include <stdio.h>
void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num%2==0)
    printf("The above number is even");
    else
    printf("The above number is odd");
    }

        
