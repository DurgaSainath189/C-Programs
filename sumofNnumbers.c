#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
		printf("sum of numbers is:%d",sum);
	
	return 0;
}
