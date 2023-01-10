#include<stdio.h>
int main()
{
	int n,reverse=0,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	do{
		reverse=reverse*10+n%10;
        sum=sum+n%10;
      	n=n/10;
	}
	while(n!=0);
	printf("The sum of digits is:%d\n",sum);
	printf("The reverse value of n is:%d",reverse);
	return 0;
}
