#include<stdio.h>
int main()
{
	FILE *fp;
	int i=0,n;
	if((fp=fopen("C:/Users/Durga Sainath/FILES/num.txt","r"))!=NULL)
	{
		fscanf(fp,"%d",&n);
		while(n!=5)
		{
			i+=n;
			fscanf(fp,"%d",&n);
		}
		printf("sum is %d",i);
		fclose(fp);
	}
}
