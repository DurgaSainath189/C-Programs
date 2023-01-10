#include<stdio.h>
int main()
{
int i=1,n,r=0;
printf("enter any no:");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
r++;
i++;
}
if(r==2)
printf("The number %d is a prime number",n);
else
printf("The number %d is a composite number",n);
return 0;
}
