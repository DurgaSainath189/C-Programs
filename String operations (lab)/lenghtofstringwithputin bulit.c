/*Lenght of String*/
#include<stdio.h>
int main()
{
	char str1[100];
	int i,length=0;
	printf("Enter the string:");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		length++;
	}
	printf("lenght of  string=%d\n",length);
}
