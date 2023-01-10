#include<stdio.h>
int main()
{
	int mat[10][10],i,j,m,n;
	printf("Enter the numbers of rows and coloumns:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements:\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&mat[i][j]);
	printf("Matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
