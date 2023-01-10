#include<stdio.h>
void lowertoupper(char[]);
int main()
{
	char a[30];
	printf("enter the string:");
	scanf("%s",a);
	lowertoupper(a);
}
void lowertoupper(char b[])
{
	for(int i=0;b[i]!='\0';i++)
	{
		if(b[i]>60 && b[i]<97)
			printf("%c",b[i]);
		else
			printf("%c",b[i]-32);
	}
	printf("\n");
}
