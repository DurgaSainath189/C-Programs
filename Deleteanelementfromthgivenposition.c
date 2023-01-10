#include <stdio.h>
int main()
{   
    int n,index,i;
	printf("enter the value of n:");
    scanf("%d",&n);
    int a[n]; 
    printf("Enter the elements\n");   
    for(i=0;i<5;i++)     
    scanf("%d",&a[i]);  
    printf("Enter the location where you wish to delete element\n");  
    scanf("%d",&index);  
    if(index>=5)      
    printf("Deletion not possible.\n");  
    else   
    {
      for (i=index-1;i<4;i++)         
      a[i]=a[i+1];     
      printf("Resultant array:\n");      
      for(i=0;i<4;i++)         
      printf("%d\n",a[i]);   
    }   
    return 0;
}
