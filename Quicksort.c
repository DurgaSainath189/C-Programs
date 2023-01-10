#include<stdio.h>
int Quick_sort(int a[],int lb,int ub)
{
   if(lb<ub)
   {
   int pivot=lb;
   int start=lb;
   int end=ub;
   int temp;
   while(start<end)	
   {
   	    while(a[start]<=a[pivot]&&start<ub)
   	    {
   		    start++;
	    }
	    while(a[end]>a[pivot])
	    {
		    end--;
	    }
	    if(start<end)
	    {
	    temp=a[start];
		a[start]=a[end];
		a[end]=temp;	
	    }
    }
    temp=a[pivot];
    a[pivot]=a[end];
    a[end]=temp;
    Quick_sort(a,lb,end-1);
	Quick_sort(a,end+1,ub);
}
}
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
	Quick_sort(a,0,n-1);
	printf("The sorted array using quick sort is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
