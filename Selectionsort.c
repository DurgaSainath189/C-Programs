#include<stdio.h>
int main()
{
	int n,i,j,temp,min;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("The sorted array using selection sort is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
