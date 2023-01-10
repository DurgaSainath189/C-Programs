#include<stdio.h>
int main()
{
    int n,i;
	long int fact=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
    fact=fact*i;
    i--;
    }
    printf("%d! is:%ld\n",n,fact);
    return 0;
}
