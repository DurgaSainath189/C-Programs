/*Addition an Multiplication of two matrices*/
#include <stdio.h>
 int main()
{
   int m,n,c,d,p,q,k,sum,first[10][10],second[10][10],add[10][10],product[10][10];
 
   printf("Enter the number of rows and columns of matrix A:\n");
   scanf("%d%d",&m,&n);
   printf("Enter the number of rows and columns of matrix B:\n");
   scanf("%d%d",&p,&q);
   if(m!=p&&n!=q)
   printf("Addition and multiplication is not possible\n");
   else
   {
   printf("Enter the elements of first matrix:\n");
 
   for(c=0;c<m;c++)
      for(d=0;d<n;d++)
         scanf("%d",&first[c][d]);
 
   printf("Enter the elements of second matrix:\n");
   for(c=0;c<p;c++)
      for(d=0;d<q;d++)
         scanf("%d",&second[c][d]);
    
    
   
   printf("Sum of entered matrices:\n");
   
   for(c=0;c<m;c++) 
   {
      for(d=0;d<n;d++) 
	  {
         add[c][d]=first[c][d]+second[c][d];
         printf("%d\t",add[c][d]);
      }
      printf("\n");
   }
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
   return 0;
}


