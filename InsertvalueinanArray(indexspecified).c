#include <stdio.h>
int main()
{  
  int A[5],index,i,key;  
  printf("enter elements in the array:\n");      
  for(i=0;i<5;i++)     
  scanf("%d",&A[i]);         
  printf("enter the index where you want to insert the element:\n");  
  scanf("%d",&index);      
  printf("enter the value into the index:\n");  
  scanf("%d",&key);     
  for(i=4;i>=index;i--)     
  A[i+1]=A[i];   
  A[index]= key;  
  printf("final array after inserting the value is\n");   
  for(i=0;i<=5;i++)     
  printf("%d ",A[i]);
}

