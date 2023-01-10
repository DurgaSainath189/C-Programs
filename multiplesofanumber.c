#include<stdio.h>
int main()
{
 int i,n,p;  
 printf("Enter the number : ") ; 
 scanf("%d",&n) ;  
 for(i=1;i<=10;i++) 
 {
 	p=n*i;
   printf("%d X %d= %d\n",n,i,p) ; 
}
return 0;
}


