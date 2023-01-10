#include<stdio.h>
int main()
{
	int n,pro=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",i);
		pro=pro*i;
	}
		printf("product of numbers is:%d",pro);
    return 0;
}
