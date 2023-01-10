#include<stdio.h>
int main()
{
int i,n,r=0;
printf("enter any no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
r++;
}
if(r==2)
printf("The number %d is a prime number",n);
else
printf("The number %d is a composite number",n);
return 0;
}
