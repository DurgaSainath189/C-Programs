#include <stdio.h> 
int main()
{
  int n,i,fib[200];
  fib[0]=0;
  fib[1]=1;
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("Fibonacci Series is:\n");
  for (i=2;i<n;i++)
  	fib[i]=fib[i-1]+fib[i-2];
    for(i=0;i<n;i++)
    printf("%d\t",fib[i]);
  return 0;
} 

