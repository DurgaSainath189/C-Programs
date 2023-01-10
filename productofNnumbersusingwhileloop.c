#include<stdio.h>
int main()
{
	int i,n,pro;
	printf("Enter the value of n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		pro=pro*i;
		i++;
	}
	printf("The product of n numbers is:%d",pro);
	return 0;
}
