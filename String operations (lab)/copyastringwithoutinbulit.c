/*Copying a string to another string*/
#include<stdio.h>
int main()
{
	char str1[100],str2[50];
	int i;
	printf("Enter string str1:\n");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("Copied string is %s",str2);
}
