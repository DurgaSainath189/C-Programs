#include<stdio.h>
void Bubble_sort(int[],int);
void Selection_sort(int[],int);
void Insertion_sort(int[],int);
void Quick_sort(int[],int,int);
void Merge_sort(int[],int,int);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int option;
	while(1)
	{
	printf("*****Methods for sorting*****/n");
	printf("1.Bubble sort\n");
	printf("2.Selection sort\n");
	printf("3.Insertion sort\n");
	printf("4.Quick sort\n");
	printf("5.Merge sort\n");
	printf("6.Exit\n");
	printf("Enter your option:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			Bubble_sort(a,n);
			break;
		case 2:
			Selection_sort(a,n);
			break;
		case 3:
			Insertion_sort(a,n);
			break;
		case 4:
			Quick_sort(a,0,n-1);
			break;
		case 5:
			Merge_sort(a,0,n-1);
			break;
		case 6:
			exit(0);
            break;
		default:
			printf("\n Wrong Choice");
            break;
    }
	}
}

