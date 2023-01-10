/*Matrix Calculator*/
#include <stdio.h>
int main()
{
  int m,n,p,q,c,d,k,f,sum=0,operation;
  int first[10][10],second[10][10],addition[10][10],difference[10][10],product[10][10],matrix[10][10],transpose[10][10];
  char again='Y';
  while(again=='Y')
  {
	//This is the Operation menu just type 1,2,3,4,5,6 or 7 to calculate
        printf("\n\t\t******** Operation Menu ********\n\n");
        printf("\t1.To Add two matrices.\n");
        printf("\t2.To Subtract two matrices.\n");
        printf("\t3.To Multiply two matrices.\n");
        printf("\t4.To find the transpose of the matrix.\n");
        printf("\t5.To check the given matrices are symmetric or not\n");
        printf("\t6.To check the given matrices are orthogonal or not\n");
        printf("\t7.Trace of a matrix\n");
        printf("\t\nEnter your choice: ");
        scanf("%d",&operation);
        switch(operation)
	{
        
    case 1:
    	//Case 1 is for addition of 2 matrices.
		printf("Enter the number of #rows and #columns of matrix A:\n");
        scanf("%d%d",&m,&n);
        printf("Enter the number of #rows and #columns of matrix B:\n");
        scanf("%d%d",&p,&q);
        if(m!=p&&n!=q)
        printf("Addition is not possible\n");
        else
        {
        printf("Enter the #elements of first matrix\n");
        
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        scanf("%d",&first[c][d]);
        
        printf("Enter the #elements of second matrix\n");
        
        for(c=0;c<p;c++)
        for(d=0;d<q;d++)
        scanf("%d",&second[c][d]);
        
        printf("Sum of entered matrices:\n");
        for(c=0;c<m;c++) 
		{
        for(d=0;d<n;d++) 
		{
        addition[c][d]=first[c][d]+second[c][d];
        printf("%d\t",addition[c][d]);
        }
        printf("\n");
        }
        }
    break;
    
	case 2:
		//Case 2 is for substraction of 2 matrices.
        printf("Enter the number of #rows and #columns of matrix A:\n");
        scanf("%d%d",&m,&n);
        printf("Enter the number of #rows and #columns of matrix B:\n");
        scanf("%d%d",&p,&q);
        if(m!=p&&n!=q)
        printf("Difference is not possible\n");
        else
        {
        printf("Enter the #elements of first matrix\n");
        
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        scanf("%d",&first[c][d]);
        
        printf("Enter the #elements of second matrix\n");
        
        for(c=0;c<p;c++)
        for(d=0;d<q;d++)
        scanf("%d",&second[c][d]);
        
        printf("Difference of entered matrices:\n");
        for(c=0;c<m;c++) 
		{
        for(d=0;d<n;d++) 
		{
        difference[c][d]=first[c][d]-second[c][d];
        printf("%d\t",difference[c][d]);
        }
        printf("\n");
        }
        }
    break;
        
	case 3:
		//Case 3 is for multiplication of 2 matrices
        printf("Enter the number of #rows and #columns of matrix A:\n");
        scanf("%d%d",&m,&n);
		printf("Enter the number of #rows and #columns of matrix B:\n");
        scanf("%d%d",&p,&q);
        while(n!=p)
        {
        printf("Invalid size! Make sure that both matrix should be of same size\n");
        printf("Enter number of #rows and #columns of matrix A:\n");
        scanf("%d%d",&m,&n);
    	printf("Enter number of #rows and #columns of matrix B:\n");
        scanf("%d%d",&p,&q);
        }
        printf("Enter #elements of first matrix\n");
        
		for(c=0;c<m;c++)
		for(d=0;d<n;d++)
		scanf("\t%d",&first[c][d]);
		
        printf("Enter #elements of second matrix\n");
        
        for(c=0;c<p;c++)
        for(d=0;d<q;d++)
        scanf("%d",&second[c][d]);
	        
	int options;
        printf("What type of operation do you want to perform from AxB or BxA?");
        printf("\nPress 1 for AxB and 2 for BxA: ");
        scanf("%d",&options);

    if(options==1)
	{
        // Multiplication of AxB
        for(c=0;c<m;c++)
		{
            for(d=0;d<q;d++)
			{
			   for(k=0;k<n;k++)
			   {
                  sum=sum+first[c][k]*second[k][d];
               }
            product[c][d]=sum;
            sum=0;
            }
        }
        printf("Product of the matrices:\n");
        for(c=0;c<m;c++) 
		{
        for(d=0;d<q;d++)
        printf("%d\t",product[c][d]);
        printf("\n");
        }
    }
    else if(options==2)
	{
        // Multiplication of BxA
        for(c=0;c<p;c++)
		{
            for(d=0;d<n;d++)
			{
                for(k=0;k<q;k++)
				{
				   sum=sum+second[d][k]*first[k][c];
                }
            product[c][d]=sum;
            sum=0;
            }
        }
 
        printf("Product of the matrices:\n");
        for(c=0;c<p;c++)
	    {
        for(d=0;d<n;d++)
        printf("%d\t",product[c][d]);
        printf("\n");
        }
    }
    else 
	{
        printf("Please add the appropiate values:");
        printf("\nWhat type of operation do you want to perform from A x B or B x A?\n");
		printf("<Write either 1 for A x B or 2 for B x A>");
        scanf("%d",&options);
        if(options==1)
		{
           //Multipilcation ofAxB
           for(c=0;c<m;c++)
		   {
               for(d=0;d<q;d++)
				{
                   for(k=0;k<n;k++)
				   {
                      sum=sum+first[c][k]*second[k][d];
                   }
                product[c][d]=sum;
                sum=0;
                }
           }
 
        printf("Product of the matrices:\n");
        for(c=0;c<m;c++) 
		{
        for(d=0;d<q;d++)
        printf("%d\t",product[c][d]);
        printf("\n");
        }
        }
        else if(options==2)
		{
       //Multiplication of BxA
        for(c=0;c<p;c++)
		{
            for(d=0;d<n;d++)
			{
			    for(k=0;k<q;k++)
				{
                sum=sum+second[d][k]*first[k][c];
                }
            product[c][d]=sum;
            sum=0;
            }
        }
 
        printf("Product of the matrices:\n");
        for(c=0;c<p;c++) 
        {
        for(d=0;d<n;d++)
        printf("%d\t",product[c][d]);
        printf("\n");
        }
        }
    }
    break;
    case 4:
    	//case 4 is for Transpose of a matrix.
    	printf("Enter the number of #rows and #columns of a matrix:\n");
        scanf("%d%d",&m,&n);
        printf("Enter #elements of the matrix\n");
        
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        scanf("%d", &matrix[c][d]);
        
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        transpose[c][d]=matrix[d][c];
        
        printf("Transpose of the matrix:\n");
        for(c=0;c<n;c++) 
		{
           for(d=0;d<m;d++)
           printf("%d\t",transpose[c][d]);
           printf("\n");
        }
    break;
    
    case 5:
    	//case 5 is to check the matrices are symmetric or not(A^T=A).
    	printf("Enter the number of #rows and #columns of matrix:\n");
        scanf("%d%d",&m,&n);
        printf("Enter #elements of the matrix\n");
        
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        scanf("%d",&matrix[c][d]);
        
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        transpose[c][d]=matrix[d][c];
        if(m==n) //check if order is same
        { 
           for(c=0;c<m;c++)
           {
               for(d=0;d<n;d++)
               {
                if (matrix[c][d]!=transpose[c][d])
                f=1;
                break;
               }
           }
        if(f==1)
        printf("The matrix isn't symmetric.\n");
        else
        printf("The matrix is symmetric.\n");
       }
        break;
    
    case 6:
    	//case 6 is to check the given matrices are orthogonal or not(AA^T=I).
    	printf("Enter the number of #rows and #columns of matrix:\n");
        scanf("%d%d",&m,&n);
        printf("Enter the #elements of matrix\n");
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        scanf("%d",&matrix[c][d]);
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        transpose[d][c]=matrix[c][d];
        for(c=0;c<m;c++)
        {
           for(d=0;d<n;d++)
           {
              for(k=0;k<n;k++)
              {
               sum=sum+matrix[c][k]*transpose[k][d];
              }
            product[c][d]=sum;
            sum=0;
           }
        }

       for(c=0;c<m;c++)
       {
          for(d=0;d<n;d++)
          {
            if(m==n)//checks if order is same
            {
            if(product[c][d]!=1)
            f=1;
            break;
            }
            else
            {
            if(product[c][d]!=0)
            f=0;
            break;
            }
          }
       }
       if(f==1&&f==0)
       printf("The matrix isn't orthogonal.\n");
       else
       printf("The matrix is orthogonal.\n");
       break;
       
       case 7:
        printf("Enter numbers of #rows and #columns of matrix:\n");
        scanf("%d%d",&m,&n);

        printf("Enter matrix elements:\n");
        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        scanf("%d",&matrix[c][d]);

        for(c=0;c<m;c++)
        for(d=0;d<n;d++)
        {
        if(c==d)
        {
        sum = sum + matrix[c][d];
        }
        }
       printf("Trace of matrix is:%d\n", sum);
       break;
    }
  }
}