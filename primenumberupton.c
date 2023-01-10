/*Prime numbers upto n*/
#include<stdio.h>
int main()
{
	int i,n,r,j;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=0;
		for(j=1;j<=i;j++)
		if(i%j==0)
		r++;
	if(r==2)
	printf("%d\t",i);
   }
	return 0;
}
