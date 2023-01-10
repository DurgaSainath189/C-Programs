#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("The sorted array using insertion sort is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
