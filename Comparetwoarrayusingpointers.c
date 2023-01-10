/*Comparing two arrays using pointers*/
#include <stdio.h>
void compare(int*,int*,int);
int main()
{
    int a1[25],a2[25],n,i; 
    printf("Enter the size of an array\n");  
    scanf("%d",&n);   
    printf("Enter the first array elements\n"); 
    for(i=0;i<n;i++) 
    scanf("%d",&a1[i]);
    printf("Enter the second array elements\n");
    for(i=0;i<n;i++)  
    scanf("%d",&a2[i]);  
    compare(a1,a2,n);   
    return 0;}
void compare(int* p1, int* p2,int n)
{  
  int i, flag=0; 
   for(i=0;i<n;i++)    
{ 
    if(*p1 != *p2)     
    { 
	flag=1; 
    break;}      
    p1++;    
    p2++;}
   if(flag == 1)   
   printf("Arrays are not equal");    
   else       
   printf("Arrays are equal");                    
}

