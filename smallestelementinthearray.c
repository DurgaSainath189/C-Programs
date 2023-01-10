#include<stdio.h>
void Smallest(int arr[],int size); 
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
    Smallest(arr,n);
    return 0;
}
void Smallest(int arr[],int size)
{
    int i,smallest=arr[0];
    for(i=1;i<size;i++)
	{
        if(arr[i]<smallest)
		{
            smallest = arr[i];
        }
    }
    printf("%d is smallest",smallest);
}


