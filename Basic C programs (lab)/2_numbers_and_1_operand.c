#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,res;
	char ch;
	printf("Enter operator:");
	scanf(" %c",&ch);
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	switch(ch)
	{
		case'+':res=a+b;
		printf("addition of two numbers is:%d",res);
	    break;
		case'-':res=a-b;
		printf("subraction of two numbers is:%d",res);
		break;
		case'*':res=a*b;
		printf("product of two numbers:%d",res);
		break;
		case'/':res=a/b;
		printf("quotient of two numbers:%d",res);
		break;
		case'%':res=a%b;
		printf("remainder of two numbers is:%d",res);
		break;
		case'^':res=pow(a,b);
		printf(" power of %d^%d is:%d",a,b,res);
		break;
	    default:printf("invalid operator");
	}
	return 0;}
