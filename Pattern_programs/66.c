/*      Write a C program to print the following patterns using for loop:
	11. Sample Output:
	
	
		Input the number of rows: 5
	
		1
		11
		111
		1111
		11111
		1111
		111
		11
		1      */


#include<stdio.h>
    void main()
    {
        int row,i,j,k,m,r;
        printf("Enter the no.of rows: ");
        scanf("%d", &r);
        row=r;
        //row=row+(row-1);
          for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("1");
            }
                    printf("\n");
                   if(i==r)
                    {
                        m=r-1;
            for(k=1;k<=m;k++)
            {
                printf("1");
    
            }
            
                printf("\n");
        
                    } 
        }
        
    }