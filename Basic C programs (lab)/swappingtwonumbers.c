/*swapping two numbers*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Before swapping \n");
	printf("value of a:");
	scanf("%d",&a);
	printf("value of b:");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After swapping \n");
	printf("value of a is:%d\n",a);
	printf("value of b is:%d",b);
    return 0;
}
