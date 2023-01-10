#include <stdio.h>
int main()
{
	int a[100],even[100],odd[100];
	int i=0,j=0,k=0,n;
	printf("Enter the Number of elements:");
	scanf("%d",&n);//storing the value of n
	printf("Enter the array elements are:\n");
	for(i=0;i<n;i++)// storing the values of the array
	{
		scanf("%d",&a[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)//printing the values of the array
	{
	printf("%d\t",a[i]);
}
for (i=0;i<n;i++)//using for loop to checking the elements 
        {
            if (a[i] % 2 == 0)
            {
                even[j] = a[i];
                j++;
            }
            else
            {
                odd[k] = a[i];
                k++;
            }
        }
        printf("\nThe elements of odd are:\n");
        for (i=0;i<k;i++)//using for loop for printing odd numbers of the array
        {
            printf("%d\t", odd[i]);
        }
 
        printf("\nThe elements of even are:\n");
        for (i=0;i<j;i++)// using for loop for printing even numbers of the array
        {
            printf("%d\t", even[i]);
        }
 
    }
    
