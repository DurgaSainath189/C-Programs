#include<stdio.h>
int main()
{
    int n,i;
	long int fact=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    fact=fact*i;
    }
    printf("%d! is:%ld\n",n,fact);
    return 0;
}
