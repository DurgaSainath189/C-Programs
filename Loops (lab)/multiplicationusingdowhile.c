/*Multplication table*/
#include<stdio.h>
int main()
{
 int i=1,n,p=1;  
 printf("Enter the number : ") ; 
 scanf("%d",&n);
 do{
   p=n*i;
   printf("%d X %d= %d\n",n,i,p);
   i++;
 }  
 while(i<=10);
 return 0;
}
