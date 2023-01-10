#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter the value of n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		sum+=i;
		i++;
	}
	printf("The sum of n numbers is:%d",sum);
	return 0;
}
