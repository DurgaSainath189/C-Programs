#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("C:/Users/Durga Sainath/FILES/a.txt","w");
	int i;
	char str[50]="";
	while(str[i])
	{
		fputc(str[i],fp);
		i++;
	}
	fclose(fp);
	
}
