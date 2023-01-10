#include<stdio.h>
#include<math.h>
int main()
{

	 float ratio, det=1,matrix[10][10];
	 int c,d,k,m,n;

	 /* Inputs */
	 /* 1. Reading number of unknowns */
	 printf("Enter the number of rows and columns of matrix: ");
	 scanf("%d%d",&m,&n);

	 /* 2. Reading Matrix */
	 printf("\nEnter Coefficients of Matrix: \n");
	 for(c=0;c<m;c++)
	 {
		  for(d=0;d<n;d++)
		  {
			   scanf("%f", &matrix[c][d]);
		  }
	 }

    /* Here we are using Gauss Elimination
    Technique for transforming matrix to
    upper triangular matrix */
	/* Applying Gauss Elimination */
	 for(c=0;c<m;c++)
	 {
       if(matrix[c][d] == 0.0)
		  {
			   printf("Mathematical Error!");
		}
		  for(d=c+1;d< n;d++)
		  {
			   ratio = matrix[d][c]/matrix[c][d];

			   for(k=0;k< m;k++)
			   {
			  		matrix[d][k] = matrix[d][k] - ratio*matrix[c][k];
			   }
		  }
	 }

	 /* Displaying upper triangular matrix */

	 /* Not required, just for the sake of understanding */

	 /* By analyzing upper triangular matrix you
	 will get what's going on :) */
	 printf("\nUpper Triangular Matrix: \n");
	 for(c=0;c<m;c++)
	 {

		  for(d=0;d< n;d++)
		  {
			   printf("%0.2f\t",matrix[c][d]);
		  }
		  printf("\n");
	 }

	 /* Finding determinant by multiplying
	 elements in principal diagonal elements */
	 for(c=0;c<m;c++)
     {
         det = det * matrix[c][d];
     }

	 printf("\n\nDeterminant of given matrix is:%.3f",det);


	 return 0;
}
