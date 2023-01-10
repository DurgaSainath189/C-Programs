#include<stdio.h>
void Largest(int arr[],int size); 
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
    Largest(arr,n);
    return 0;
}
void Largest(int arr[],int size)
{
    int i,largest=arr[0];
    for(i=1;i<size;i++)
	{
        if(arr[i]>largest)
		{
            largest =arr[i];
        }
    }
    printf("%d is largest ",largest);
}
