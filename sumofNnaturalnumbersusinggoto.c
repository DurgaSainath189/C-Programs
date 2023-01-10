#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(n<0)
	    goto end;
	for(i=0;i<=n;i++)
	sum+=i;
	printf("Sum of first %d natural numbers is:%d\n",n,sum);
	end:
	return 0;
}
