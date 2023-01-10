#include<stdio.h>
int prime(int);
int main()
{
int i,n,r=0,primeno;
printf("enter any no:");
scanf("%d",&n);
primeno=prime(n);
for(i=1;i<=n;i++)
{
if(n%i==0)
r++;
}
if(r==2)
printf("The number %d is a prime number",n);
else
printf("The number %d is a composite number",n);
}
 int prime(int x)
{
	return x;
}
