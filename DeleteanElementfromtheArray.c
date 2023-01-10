#include <stdio.h>
int main()
{    
   int i,index,n;
   printf("enter the value of n:");
   scanf("%d",&n);
   int a[n];       
   printf("enter the elements of the array:\n");   
   for(i=0;i<n;i++)    
   scanf("%d",&a[i]);
   printf("enter the index to delete the element:\n");
   scanf("%d",&index);
   for(i=index;i<n;i++) 
   {     
   a[i]=a[i+1];  
   } 
   printf("Array after deletion:\n");   
   for(i=0;i<n;i++)   
   printf("%d\t",a[i]);
} 
