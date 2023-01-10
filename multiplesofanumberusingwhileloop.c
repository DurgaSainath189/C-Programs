#include<stdio.h>
int main()
{
 int i,n,p;  
 printf("Enter the number : ") ; 
 scanf("%d",&n) ;  
 i=1;
 while(i<=10) 
 {
 	p=n*i;
   printf("%d X %d= %d\n",n,i,p);
   i++; 
 }
 return 0;
}
