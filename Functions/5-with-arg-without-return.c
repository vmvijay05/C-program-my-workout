// With Argument Without Return

#include <stdio.h>
void mult(int m);
void main()
{
    int m = 5;
    printf(" Before function calling\n");
    mult(m); // or mult(5);
    printf(" After function calling\n");
    printf("m is %d\n", m);
}
void mult(int m)
{
    printf(" x * x * x = %d \n", m * m * m);
    m = m + 1;
    printf("m is %d\n", m);
}

/*Output:

 Before function calling
 x * x * x = 125
m is 6
 After function calling
m is 5            */