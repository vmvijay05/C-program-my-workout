//73. Write a C program to read 10 numbers from the keyboard and find their sum and average
#include<stdio.h>
void main()
{
    int i,n,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,sum=0,avg=0;
    printf("Input the 10 numbers: ");

   /* printf("Number 1: \n");
    scanf("%d",&n1);
      printf("Number 2: \n");
    scanf("%d",&n2);
      printf("Number 3: \n");
    scanf("%d",&n3);
      printf("Number 4: \n");
    scanf("%d",&n4);
      printf("Number 5: \n");
    scanf("%d",&n5);
      printf("Number 6: \n");
    scanf("%d",&n6);
      printf("Number 7: \n");
    scanf("%d",&n7);
      printf("Number 8: \n");
    scanf("%d",&n8);
      printf("Number 9: \n");
    scanf("%d",&n9);
      printf("Number 10: \n");
    scanf("%d",&n10); */


    for(i=1;i<=10;i++)
    {
        printf("\nNumber %d: ",i);
    scanf("%d",&n);
    sum=sum+n;

    }
    //sum=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    avg=sum/10;

    printf("The sum is: %d\n",sum);
    printf("The average is: %d\n", avg);
}