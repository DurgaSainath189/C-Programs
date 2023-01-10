#include<stdio.h>
int main()
{
	int i=1,n,r,j;
	printf("Enter the value of n:");
	scanf("%d",&n);
	do{
		r=0;
		for(j=1;j<=i;j++)
			if(i%j==0)
				r++;
	if(r==2)
	{
		printf("%d\t",i);
	}
}
	while(i<=n);
	return 0;
}
