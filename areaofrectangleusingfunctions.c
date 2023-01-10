#include<stdio.h>
int areaofrectangle(int,int);
int main()
{
	int l,b,area;
	printf("Enter the value of l:");
	scanf("%d",&l);
	printf("Enter the value of b:");
	scanf("%d",&b);
	area=areaofrectangle(l,b);
	printf("Area of reactangle is:%d",area);
}
int areaofrectangle(int x,int y)
{
	return x*y;
}
