#include<stdio.h>
int merge_sort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int merge(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	int b[k];
	while(i<=mid&&j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;k++;
		}
	}
}
int main()
{
	int n,b[k];
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("The sorted array using merge sort is:\n");
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
		printf("%d",a[k]);
	}
	
}
