/*      Write a C program to print the following patterns using for loop:

        Sample Output: 1
		Input the number of rows: 4
		
		*
		**
		***
		****
		***
		**
		*              */

   #include<stdio.h>
    void main()
    {
        int row,i,j,k,m,r,flag;
        printf("Enter the no.of rows: ");
        scanf("%d", &r);
        row=r;
        //row=row+(row-1);
          for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
                    printf("\n");
        }
         for (i = r-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
        
    }


