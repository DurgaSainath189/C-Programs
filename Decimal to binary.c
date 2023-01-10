#include<stdio.h>
int main()
{
	int n,rem,a[20],i;
	printf("Enter the decimal value of n:");
	scanf("%d",&n);
	for( i=0;n>0;i++)
	{
	rem=n%2;
	a[i]=rem;
	n=n/2;
    }
    printf("\n The binary equivalnet is:");
    for( i-=1;i>=0;i--)
    printf("%d",a[i]);
    return 0;
}
