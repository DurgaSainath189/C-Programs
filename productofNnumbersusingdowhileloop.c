#include<stdio.h>
int main()
{
	int i,n,pro;
	printf("Enter the value of n:");
	scanf("%d",&n);
	i=1;
	do{
		printf("%d\n",i);
		pro*=i;
		i++;
	}
	while(i<=n);
	printf("The product of n numbers is:%d",pro);
	return 0;
}
