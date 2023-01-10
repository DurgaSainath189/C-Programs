#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of array elements is:%d",sum);
	return 0;
}
