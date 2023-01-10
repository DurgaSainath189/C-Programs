#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("C:/Users/Durga Sainath/FILES/a.txt","r");
	char i;
	i=fgetc(fp);
	printf("%c",i);
	fclose(fp);
}
