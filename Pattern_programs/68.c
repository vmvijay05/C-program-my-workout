/* Write a C program to print the following patterns using for loop:
	13. Sample Output:
	
		Input the number of rows: 6
		
		*
		* *
		* * *
		* * * *
		* * * * *
		* * * * * *
		* * * * *
		* * * * 
		* * * 
		* *
		*         */

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
                printf("* ");
            }
                    printf("\n");
                   if(i==r)
                    {
                        m=r-1;
            for(k=1;k<=m;k++)
            {
                printf("* ");
    
            }
            
                printf("\n");
        
                    } 
        }
        
    }