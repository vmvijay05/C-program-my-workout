/*Write a program in C to display the n terms of a harmonic series and their sum.(to use for loop)
		1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
		Test Data :
		Input the number of terms : 5
		Expected Output :
		1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
		Sum of Series upto 5 terms : 2.283334*/

    #include<stdio.h>
    void main()
    {
        int n,i;
        float sum=1;

        printf("Enter the no.of terms: ");
        scanf("%d", &n);

        for(i=1;i<=n;i++)
        {
            printf("1/%d + \t",i);
           //  printf("sum=%f \n", sum);
            sum=sum+((float)1/(i+1));
         //   printf("sum=%f \n", sum);
        }
        printf("\nThe sum of harmonic series is: %f\n", sum);
    }