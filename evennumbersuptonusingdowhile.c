#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int i=0;
	do{
		printf("%d\n",i);
		i+=2;
	}
	while(i<=n);
	return 0;
}
