#include<stdio.h>
int main()
{
	int i=-1,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
	i++;
	if(i%2!=0)
	{
	continue;
	}
	printf("%d  ",i);
}
	return 0;
}
