/*Matrices sum and difference*/
#include <stdio.h>
 int main()
{
   int m, n, c, d,p,q, first[10][10], second[10][10], sum[10][10],difference[10][10];
 
   printf("Enter the number of rows and columns of matrix A\n");
   scanf("%d%d", &m, &n);
   printf("Enter the number of rows and columns of matrix B\n");
   scanf("%d%d", &p, &q);
   if(m!=p&&n!=q)
   printf("Addition and difference are not possible\n");
   else
   {
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum  of entered matrices:\n");
   for (c = 0; c < m; c++)
    {
      for (d = 0 ; d < n; d++) 
	  {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
    }
  printf("Differnece of two matrices is:\n");
   for (c = 0; c < m; c++)
    {
      for (d = 0 ; d < n; d++) 
	  {
        difference[c][d]=first[c][d] - second[c][d];
        printf("%d\t",difference[c][d]);
      }
       printf("\n");
    }
     
      return 0;
}
}
   
