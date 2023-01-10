/*Prime numbers upto n*/
#include<stdio.h>
int main()
{
	int i=1,n,r,j;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		r=0;
		for(j=1;j<=i;j++,i++)
		if(i%j==0)
		r++;
	
	if(r==2)
	printf("%d\t",i);
	}
	return 0;
}
