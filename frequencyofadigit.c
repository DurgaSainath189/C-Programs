#include<stdio.h>
int main()
{
    int n,i,a,total=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element:\n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
    if(a==arr[i])
    total++;
    }
    printf("The frequency of the element is:%d",total);
    return 0;
}
