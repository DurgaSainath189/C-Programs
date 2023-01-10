#include<stdio.h>
int prime(int);
int main()
{
	int i,n,r,j,primeno;
	printf("Enter the value of n:");
	scanf("%d",&n);
	primeno=prime(n);
	for(i=1;i<=n;i++)
	{
		r=0;
		for(j=1;j<=i;j++)
			if(i%j==0)
				r++;
	if(r==2)
		printf("%d\n",i);
   }
}
int prime(int x)
{
	return x;
}
