#include <stdio.h>
int primenum(int, int);
int main()
{
    int n,m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    m=primenum(n,n/2);
    if(m==1)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is a composite number\n",n);
    }
    return 0;
}
int primenum(int n,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
       if(n%i==0)
       {
         return 0;
       }
       else
       {
         return primenum(n, i - 1);
       }       
    }
}
