#include<stdio.h>
int main()
{
int m,n,p,q,c,d,k,sum;
int first[10][10],second[10][10],multiply[10][10];
printf("Enter number of #rows and #columns of matrix A:\n");
        scanf("%d%d", &m, &n);
		printf("Enter number of #rows and #columns of matrix B:\n");
        scanf("%d%d", &p, &q);
        while(m!=p&&n!=q)
        {
        printf("Invalid option! Make sure that both matrix should be of same size\n");
        printf("Enter number of #rows and #columns of matrix A:\n");
        scanf("%d%d", &m, &n);
    	printf("Enter number of #rows and #columns of matrix B:\n");
        scanf("%d%d", &p, &q);
        }
        printf("Enter elements of first matrix\n");
		for(c=0;c<m;c++)
		for(d=0;d<n;d++)
		scanf("\t%d",&first[c][d]);
        printf("Enter elements of second matrix\n");
        for(c=0;c<p;c++)
        for(d=0;d<q;d++)
        scanf("%d",&second[c][d]);
        for(c=0;c<m;c++)
		{
            for(d=0;d<q;d++)
			{
			   for(k=0;k<n;k++)
			   {
                  sum=sum+first[c][k]*second[k][d];
               }
            multiply[c][d]=sum;
            sum = 0;
            }
        }
            printf("Product of the matrices:\n");
        for(c=0;c<m;c++) 
		{
        for(d=0;d<q;d++)
        printf("%d\t",multiply[c][d]);
        printf("\n");
        }
        return 0;
    }
