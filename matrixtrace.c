#include<stdio.h>

int main()
{
 int c,d,m,n,sum=0;
 int matrix[10][10];

 printf("Enter numbers of rows and columns of matrix:\n");
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

 return 0;
}

