#include<stdio.h>
void avg(int,int,int,int,int);
int main()
{
	int a,b,c,d,e;
	printf("Enter the value of 5 numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg(a,b,c,d,e);
	return 0;
}
void avg(int a,int b,int c,int d,int e)
{
	float avg;
	avg=(float)(a+b+c+d+e)/5;
	printf("The avg of 5 numbers is:%.2f",avg);
}
