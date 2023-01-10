/*Sorting array elements*/
#include <stdio.h>
int main()
{
   int i,a[20],n,j,temp;
   printf("Enter the value of n:");
   scanf("%d",&n);
   printf("Before sorting:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("After sorting:\n");
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
       }
       printf("%d\t",a[i]);
   }
    return 0;
}
