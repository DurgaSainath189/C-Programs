#include <stdio.h>
#include <math.h>
long long convert(int);
int main() 
{
  int n, binary;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  binary = convert(n);
  printf("%lld", binary);
  return 0;
}
long long convert(int n) 
{
  long long binary = 0;
  int rem, i = 1;
  while (n!=0) 
  {
    rem = n % 2;
    n /= 2;
    binary += rem * i;
    i *= 10;
  }
return binary;
}
