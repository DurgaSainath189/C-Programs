#include <stdio.h> 
int main()
{
  int n,first=0,second=1,result,i;
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("Fibonacci Series is:\n");
  i=0;
  do{
  	if (i<=1)
      result=i;
    else
    {
      result=first +second;
      first=second;
      second=result;
    }
    printf("%d\t",result);
    i++;
  } 
  while(i<n);
  return 0;
} 
