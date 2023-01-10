#include<stdio.h>
int main()
{
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	if(a>0)
	printf("The value of a is positive");
	if(a==0)
	printf("The value of a is Zero");
	if(a<0)
	printf("The value of a is Negative");
	return 0;
}
