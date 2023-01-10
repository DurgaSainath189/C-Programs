/*Decimal to binary*/
#include<stdio.h>
int decitobin(int a[],int);
int main()
{
	int n,rem,a[20],i,dtb;
	printf("Enter the decimal value of n:");
	scanf("%d",&n);
	dtb=decitobin(a[i],n);
	printf("\n The binary equivalnet is:");
    for( i-=1;i>=0;i--)
    printf("%d",a[i]);
	return 0;
}
    int decitobin(int a[20],int n)
    {
    int i,rem,n,a[i];
	for(i=0;n>0;i++)
	{
	rem=n%2;
	a[i]=rem;
	n=n/2;
	return 0;
    }}
