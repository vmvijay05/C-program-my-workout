/*4. Write a program in C to check if a given number is even or odd using the function.
		Test Data :
		Input any number : 5
		Expected Output :
		
		The entered number is odd.  */

//Without Argument With Return:
#include<stdio.h>
int oddeven();

void main()
{
    int result;
    result=oddeven();
    if(result==2)
    {
        printf("The given number is even");
    }
    else if(result==1)
    {
        printf("The given number is odd");
    }
}

int oddeven(){
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        return 2;
    }
    else{
        return 1;
    }
}

/*Output:
Enter the value: 234
The given number is even    */