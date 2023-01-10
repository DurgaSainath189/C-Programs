#include <stdio.h>
int secondSmallest(int a[],int n)
{
    int min=a[0];
    int secondMin=a[1] ;
    for(int i=0;i<n;i++)    
    {
       if(a[i]<min)
       {
          secondMin=min;
          min=a[i];
       }
    }
    for(int i=0;i<n;i++)    
    {
       if(a[i]<secondMin&&a[i]!=min)
       {
          secondMin=a[i];
       }
    }
  return secondMin;              
}
int secondLargest(int a[],int n)
{
    int max=a[0];
    int secondMax=a[1] ;
    for(int i=0;i<n;i++)    
    {
       if(a[i]>max)
       {
          secondMax=max;
          max=a[i];
       }
    }
    for(int i=0;i<n;i++)    
    {
       if(a[i]>secondMax&&a[i]!=max)
       {
          secondMax=a[i];
       }
    }
  return secondMax;                
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                      
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
        printf("Invalid Input");
    }
    else
    {
       int sS=secondSmallest(a,n);
       printf("The second smallest element is %d",sS);
       printf("\n");
       int sL=secondLargest(a,n);
       printf("The second largest element is %d",sL);
    }
    return 0;
}
