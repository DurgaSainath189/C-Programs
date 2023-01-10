/*Largest and smallest numbers in an array*/
#include<stdio.h>
void LargestAndSmallest(int arr[],int size); 
int main()
{
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);    
    }
    LargestAndSmallest(arr,n);
    return 0;
}
void LargestAndSmallest(int arr[],int size)
{
    int i,largest=arr[0],smallest=arr[0];
    for(i=1;i<size;i++)
	{
        if(arr[i]>largest)
		{
            largest =arr[i];
        }
        if(arr[i]<smallest)
		{
            smallest = arr[i];
        }
    }
    printf("%d is largest and %d is smallest",largest,smallest);
}


