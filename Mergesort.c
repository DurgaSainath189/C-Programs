#include<stdio.h>
void merge_sort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid;
		mid = (lb+ub)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int merge(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	int m1 = mid-lb+1;
	int m2 = ub-mid;
	int left[m1],right[m2];
	for(i=0;i<m1;i++)
	{
		left[i] = a[lb+i];
	}
	for(j=0;j<m2;j++)
	{
		right[j] = a[mid+1+j];
	}
	i = 0;
	j = 0;
	k = lb;
	while(i<m1 && j<m2)
	{
		if(left[i]<=right[j])
		{
			a[k] = left[i];
			i++;
			k++;
		}
		else if(left[i]>=right[j])
		{
			a[k] = right[j];
			j++;
			k++;
		}
	}
	while(i<m1)
	{
		a[k] = left[i];
		i++;
		k++;
	}
	while(j>m2)
	{
		a[k] = right[j];
		j++;
		k++;
	}
}
int main()
{
    int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The sorted array using merge sort is:\n");
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

