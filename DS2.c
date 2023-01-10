#include<stdio.h>
void bubblesort(int[],int);
void selectionsort(int[],int);
void inserationsort(int[],int);
void  quicksort(int[],int,int);
void mergesort(int[],int,int);
int main()
{
	int n;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n1.Sorting of the elements using bubble sort:\n");
	printf("\n2.Sorting of the elements using Selection sort:\n");
	printf("\n3.Sorting of the elements using Inseration sort:\n");
	printf("\n4.Sorting of the elements using quick sort:\n");
	printf("\n5.Sorting of the elements using Merge sort:\n");
	int choice;
	scanf("%d",&choice);
	if(choice == 1)
		bubblesort(arr,n);
	else if(choice == 2)
		selectionsort(arr,n);
	else if(choice == 3)
		inserationsort(arr,n);
	else if(choice == 4)
	{
		quicksort(arr,0,n-1);
		for(int i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	else
		return 0;
}
//Time complexity for bubble sort:
//worst case:o(n^2)
//average case:o(n^2)
//best case:o(n)
//The best case is when the arrays is in ascending order
//Space complexity:o(1) Stable:Yes
void bubblesort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Sorted elements after bubble sort:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
//Worst case:o(n^2)
//Best case:o(n^2)
//Average case:o(n^2)
//Space complexity:o(1) Stable:Yes
void selectionsort(int arr[],int n)
{
	int pos;
	for(int i=0;i<n-1;i++)
	{
		pos = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
			{
				pos = j;
			}
		}
		if(pos!=i)
		{
			int temp = arr[i];
			arr[i] = arr[pos];
			arr[pos] = temp;
		}
	}
	printf("Sorted elements after selection sort:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
//Worst case:o(n^2)
//Best case:o(n)
//Average case:o(n^2)
//Space complexity:o(1)
//Stable:Yes 
void inserationsort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key = arr[i];
		int j = i-1;
		while(arr[j]>=key && j>=0)
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}
	printf("Sorted elements after inseration sort:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
//Worst case:o(n^2)
//Best case:o(nlogn)
//Average case:o(nlogn)
//Stable:No
//Inplace:Yes
void quicksort(int arr[],int left,int right)
{
	int pivot,i,j,temp;
	if(left<right)
	{
		pivot = left;
		i = left;
		j = right;
		while(i<j)
		{
			while(arr[i]<=arr[pivot] && i<right)
			{
				i++;
			}
			while(arr[j]>arr[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		int temp = arr[pivot];
		arr[pivot] = arr[j];
		arr[j] = temp;
	quicksort(arr,left,j-1);
	quicksort(arr,j+1,right);
}
}
