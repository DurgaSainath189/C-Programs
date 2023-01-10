#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	do{
        sum=sum+n%10;
      	n=n/10;
	}
	while(n!=0);
	printf("The sum of digits is:%d\n",sum);
	return 0;
}
