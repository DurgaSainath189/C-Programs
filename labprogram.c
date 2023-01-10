#include<stdio.h>
int main()
{
    int arr[100],n,key,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Enter the key u want to insert at beggining: ");
    scanf("%d",&key);
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i]=key;
    printf("Afterr insertion:");
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}